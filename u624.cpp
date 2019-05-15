#include <bits/stdc++.h>
using namespace std;
int n,t,ans=0,k=0;
vector<int>input(25),res;
vector<int>result;
void bc(int c, int sum){
    
    for(int i=c;i<t;i++){
        if(input[i]+sum<=n){
            res.push_back(input[i]); bc(i+1,sum+input[i]); 
            if(sum+input[i]>=ans){
                result.clear();result=res;
                ans=0;for(int j: result) ans+=j;
            }
            res.pop_back();
        }
    }
}





int main(){
    while(cin>>n){
        cin>>t; ans=0;
        input.clear();res.clear();result.clear();
        for( int i=0;i<t;i++) cin>>input[i];
        bc(0,0);
        for(int i=0;i<result.size();i++) cout<< result[i]<<" ";
        cout<<"sum:"<<ans<<endl;
    }
}
     

