#include<bits/stdc++.h>
using namespace std;

int main(){
    freopen("input.txt","r",stdin);
    int i=1;
    while(1){
        int n,m;cin>>n>>m;if(n==0 and m==0) return 0;
        vector<int>bachelors(n), sp(m);
        for(int i=0;i<n;i++) cin>>bachelors[i]; sort(bachelors.begin(),bachelors.end());
        for(int j=0;j<m;j++) cin>>sp[j];
        if(n>m) printf("Case %d: %d %d\n",i++,n-m,bachelors[0]);
        else printf("Case %d: %d\n",i++,0);
    }
}
