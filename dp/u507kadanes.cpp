//jay kadanes algorithm for longest increasing subsequence.


#include <bits/stdc++.h>
using namespace std;

int main(){
    int tc;cin>>tc;int route=0;
    while(tc--){
        int r,begin=1,end=1,tb=1;cin>>r;
        vector<int>num(r); for(int i=1;i<r;i++) cin>>num[i];
        int sum=0,res=0;
        for(int i=1;i<r;i++){
            sum+=num[i];
            if(sum>res) {res=sum;
                end=i;begin=tb;}
            if(sum<0) {sum=0;tb=i;}
        }
        if(res>0) printf("The nicest part of route %d is between stops %d and %d\n",++route,begin+1,end+1);
        else printf("Route %d has no nice parts\n",++route);
    }
}


