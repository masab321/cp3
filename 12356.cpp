#include <bits/stdc++.h>
using namespace std;

int main(){
    while(true){
        int s,b;
        cin>>s>>b;
        vector<int> line(s+10,1);
        if(s==0&&b==0) return 0;
        
        for(int i=0;i<b;i++){
            int left,right;
            cin>>left>>right;
            for(int j=left;j<=right;j++) line[j]=0;
            int l=s,r=1;
            for(l=left;l>=1;l--){
                if(line[l]==1) {cout<<l<<" ";break;}
            }
            if(l<1) cout<<"* ";
            for(r=right;r<=s;r++){
                if(line[r]==1) {cout<<r<<endl;break;}
            }
            if(r>s) cout<<"*"<<endl;
        }
        cout<<"-"<<endl;
    }
            


}
