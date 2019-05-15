#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(1){
        cin>>n;if (n==0) return 0;
        vector<int>bags(n),left(n,0);
        for(int i=0;i<n;i++) {cin>>bags[i]; left[i]=bags[i];}
        sort(bags.begin(),bags.end());
        sort(left.begin(),left.end());
        vector<pair<int,int>> result;
        int ans=n;
        int k=0;
        for(int i=0;i<n;i++){
            for(int j=k;j<n;j++){
                if (bags[i]<left[j]){left[j]-=bags[i];result.push_back(make_pair(bags[i],bags[j])); k++; break;}
            }
        }
        vector <vector<int>> fi;
        vector <int >dummy;
        while (!result.empty()){
            dummy.push_back(result[0].first);
            int right= result[0].second; 
            for(int i=1;i<result.size();i++){
                if(result[i].first==right) {
                    dummy.push_back(result[i].second); right= result[i].second;result.erase(result.begin()+i);i--;}
            }
            fi.push_back(dummy);
            result.erase(result.begin());
            dummy.clear();
        }

        cout<<fi.size()<<endl;
        for(int i=0;i<fi.size();i++){
            for(int j=0;j<fi[i].size();j++) cout<<fi[i][j]<<" ";
            cout<<endl;
        }
        cout<<endl;
    }
}
