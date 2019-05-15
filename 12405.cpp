#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;int r=1;
    while(t--){
        int n;cin>>n;
        vector<char> field(n);
        for(int i=0;i<n;i++) cin>>field[i];
        if(n%3) for(int i=0;i<n%3;i++) field.push_back('#');
        int res=0,flag=0;
        for(int i=0;i<n;i++){
            if (flag ==0){
                if(field[i]=='.') { flag =1; continue;}
            }
            if (flag==1){
                if(field[i-1]=='.' or field[i+1]=='.' or field[i]=='.'){ res++;field[i-1]='#';field[i+1]='#';field[i]='#'; i++;flag=0;}
            }
        }
        if(flag==1) res++;
        printf("Case %d: %d\n",r++,res);
    }
}


