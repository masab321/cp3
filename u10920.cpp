#include<bits/stdc++.h>
using namespace std;

void rc(int line,int column){
    cout<<"Line = "<<line<<", column = "<<column<<"."<<endl;
}

int main(){
    while(1){
    label:
        long long s,p;cin>>s>>p;
        if (s==0&&p==0) break;
        //if(p==1){rc(1,1);continue;}
        
        long long limit =1,namta=1,n=1;
        for(;p>limit;namta++){
            limit=limit+(8*namta);
            n+=2;
        }
        int catalyst;
        if(s-n==0) catalyst=0; else catalyst=(s-n)/2;
       // cout<<n;
        for(int i=n;i>0;i--){
            if(p==limit){rc(catalyst+i,catalyst+n);goto label;}
            limit--;
        }
        limit++;

        for(int i=n;i>0;i--){
            if(p==limit){rc(catalyst+1,catalyst+i);goto label;}
            limit--;
        }
        limit++;
        for(int i=1;i<=n;i++){
            if(p==limit){rc(catalyst+i,catalyst+1);goto label;}
            limit--;
        }
        limit++;
        for(int i=1;i<n;i++){
            if(p==limit){rc(catalyst+n,catalyst+i);goto label;}
            limit--;
        }
        limit++;
    }
}
