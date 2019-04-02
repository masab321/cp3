#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=1;cin>>n;
    while(n){
        
        map<string,int> courses;
        while(n--){
            vector<int> current(5);
            for(int i=0;i<5;i++) cin>>current[i];
            sort(current.begin(),current.end());
            stringstream ss;
            copy(current.begin(),current.end(),ostream_iterator<int>(ss));
            string s= ss.str();
            courses[s]++;
        }
        int m=0;
        for(auto i:courses)
            {if(i.second>m) m=i.second;}
        int res=0;
        for(auto i:courses)
            {if(i.second==m) res+=i.second;}
        cout<<res<<endl;
        cin>>n;
    }
}

