#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;;
    while(1){
        cin>>n;if(n==0) return 0;
        long long res=0;
        multiset<long long> days;
        while(n--){
        long long k,r;
        cin>>k;
        while(k--){cin>>r;days.insert(r);}
        auto b=days.begin();//cout<<*b<<endl;
        auto e=days.end();e--;//cout<<*e<<endl;
        res+=(*e - *b);
        days.erase(e);days.erase(b);
        }
        cout<<res<<endl;
    }
}


