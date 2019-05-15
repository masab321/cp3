#include<bits/stdc++.h>
using namespace std;
int m,c,price[25][25];

int shop(int money,int g){
    if(money<0) return -999999999;
    if(g==c) return (m-money);
    int ans=-1;
    for(int i=1;i<=price[g][0];i++)
        ans= max(ans,shop(money-price[g][i],g+1));
    return ans;
}


int main(){
    int n;cin>>n;
    while(n--){
        cin>>m>>c;
        for(int i=0;i<c;i++){
            cin>>price[i][0];
            for(int j=1;j<=price[i][0];j++)
                cin>>price[i][j];
        }
        cout<<shop(m,0)<<endl;
    }
}
