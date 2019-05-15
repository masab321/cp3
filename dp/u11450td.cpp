#include<bits/stdc++.h>
using  namespace std;

int m,c,price[25][25];
int memo[210][25];

void display(){
    for(int i=0;i<m+1;i++){
        for(int j=0;j<c;j++) 
            cout<<memo[i][j]<<" ";
        cout<<endl;
    }
    cout<<endl;
}


int shop(int money,int g){
    if (money<0) return -1000000;
    if (g==c) return m-money;
    if(memo[money][g]!=-1) return memo[money][g];
    int ans=-2; //cout<<ans;
    for(int i=1;i<=price[g][0];i++)
        ans=max(ans,shop(money-price[g][i],g+1));
    memo[money][g]=ans;cout<<money<<" "<<g<<endl;
    display();
    return memo[money][g];



}

int main(){
    int tc;cin>>tc;
    while(tc--){
        cin>>m>>c;
        int k;
        for(int i=0;i<c;i++){
            cin>>price[i][0];
            for(int j=1;j<=price[i][0];j++){
                cin>>price[i][j];
            }
        }
        memset(memo, -1, sizeof memo);
        int score = shop(m,0);
        if(score<0) cout<<"no solution"<<endl;
        else cout<<score<<endl;
        display();
    }
}
