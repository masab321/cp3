#include  <bits/stdc++.h>
using namespace std;

int absd(int a, int b){
    if(a>b) swap(a,b);
    return (b-a);
}

int main(){
    int n;
    while(cin>>n){
        
        int t,fl=0;
        vector<int>num(n);
        vector<bool>jo(n,0);
        for(int i=0;i<n;i++) cin>>num[i];
        for(int i=1;i<n;i++){
            t=absd(num[i],num[i-1]);
            jo[t]=1;
        }
        for(int i=1;i<n;i++){
            if(jo[i]==0) {cout<<"Not jolly\n";fl=1;break;}

        }
        if(fl==0)
            cout<<"Jolly\n";
    
    
    }
}

