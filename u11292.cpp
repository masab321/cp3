#include<bits/stdc++.h>
using namespace std;


int main(){
    while(1){
        int n,m;cin>>n>>m;if(n==0 and m==0) return 0;
        vector<int>dragon(n),knight(m);
        for(int i=0;i<n;i++) cin>>dragon[i]; sort(dragon.begin(),dragon.end());
        for(int i=0;i<m;i++) cin>>knight[i]; sort(knight.begin(),knight.end());
        int gold =0,i,j;
        for( i=0,j=0;i<n&&j<m;){
            if(dragon[i]>knight[j]) j++;
            else{ i++;gold+= knight[j++];}
        }
        if(i==n) cout<<gold<<endl;
        else cout<<"Loowater is doomed!"<<endl;
    }
}

