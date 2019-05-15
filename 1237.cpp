#include <bits/stdc++.h>
using namespace std;

typedef struct{
   string name;
   int low;
   int high;
}cars;


int main(){
    int t;cin>>t;
    while(t--){
       // memset(input, 0, sizeof input);
        cars input[10000];
        int n;cin>>n;
        for(int i=0;i<n;i++) cin>>input[i].name>>input[i].low>>input[i].high;
        int r;cin>>r;
        for(int i=0;i<r;i++){
            int p,cnt=0,index=0;cin>>p;
            for(int j=0;j<n;j++){
                if(p>=input[j].low && p<=input[j].high){cnt++; index=j;}
            }
            if(cnt==1) cout<<input[index].name<<endl;
            else cout<<"UNDETERMINED"<<endl;
        }
        if(t)cout<<endl;
    }





}

