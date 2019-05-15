//bottom up solution.
#include <bits/stdc++.h>
using namespace std;

int main(){
    int tc,g,money,pre=0,cur=1;
    int price[25][25];
    bool reachable[2][210];
    cin>>tc;
    while(tc--){
        cin>>money>>g;
        for(int i=0;i<g;i++){
            cin>>price[i][0];
            for(int j=1;j<=price[i][0];j++) cin>>price[i][j];
        }
        memset(reachable , 0, sizeof reachable);
        for(int i=1;i<=price[0][0];i++) 
            if(money-price[0][i]>=0) 
                reachable[pre][money-price[0][i]] = 1;
        for(int i=1;i<g;i++){
            for(int j=0;j<=money;j++)
                if(reachable[pre][j])
                    for(int k=1;k<=price[i][0];k++)
                        if(j-price[i][k]>=0)        
                            reachable[cur][j-price[i][k]]=1;
            swap(pre,cur);
            for(int temp=0;temp<=money;temp++) reachable[cur][temp]=0;
           // cout<<endl;
        }
        int k;
        for( k=0;k<=money&&reachable[pre][k]!=1;k++);
        if(k==money+1) cout<<"no solution"<<endl;
        else cout<<money-k<<endl;
            
    }
}
