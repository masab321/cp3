#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int>gn;
    int n,num;
    cin>>n>>num;
    while(n--){
        int k;
        cin>>k;
        gn.push_back(k);
    }
    sort(gn.begin(),gn.end());
    for(int i=0;i<gn.size();i++){
        if(gn[i]<num){
            for(int j=gn.size()-1;j>i;--j){
                if(gn[i]+gn[j]==num){
                    cout<<gn[i]<<"  "<<gn[j]<<endl;
                    return 0;
                }
            }
        }
    }
    cout<<"not found";
    return 0;
}
