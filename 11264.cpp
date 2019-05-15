#include <bits/stdc++.h>
using namespace std;

vector <long long> coins;
set<long long> diff;
long long r;

void withdraw(long long x){
    if(x==0) return;
    long long y;
    for(long long i=0;i<r;i++){
        if(i==r-1) {y=coins[i];}
        else if(coins[i]<=x&&coins[i+1]>x) {y=coins[i];break;}
    }
    diff.insert(y);//cout<<x<<endl;
    x=x-y;
    withdraw(x);
}

int main(){
    int n;cin>>n;
    while(n--){
        coins.clear();
        diff.clear();
        
        long long k;
        cin>>r;
        vector<long long > rest(r+1);
        long long res=0,t=1;
        for(long long i=0;i<r;i++){cin>>k; coins.push_back(k);} //cout<<res<<endl;
        res=coins[0];
        for(long long i=1;i<r-1;){//cout<<k<<endl;
            if(coins[i+1]> res+coins[i]) {t++; res+=coins[i];}
            
            i++;
            
            
            
        }
        cout<<t+1<<endl;
    }
}

        
