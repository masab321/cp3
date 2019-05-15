#include <bits/stdc++.h>
using namespace std;

int input[105][105],res[105][105];
int n,t;
int dfs_num[101],reachables[101];
queue<int>b;

void bfs(int u, int r){
    
    b.push(u);
    while(!b.empty()){
        int k=b.front();b.pop();dfs_num[k]=1;
        if(k==r) continue;
        else 
        for(int i=0;i<n;i++){
            if(input[k][i] && !dfs_num[i]){
                b.push(i);dfs_num[i]=1;
            }
        }
    }
}



void  dfs(int u,int r){
    if(u==r) return;
    dfs_num[u]=1;
    for(int i=0;i<n;i++){
        if(input[u][i]&& !dfs_num[i]){
           dfs(i,r);
        }
    }
}

void calc(){
    for(int i=0;i<n;i++){
        
            for(int j=0;j<n;j++){
                dfs_num[j]=0;
            }
            bfs(0,i);
            for(int j=0;j<n;j++){
                if(reachables[j] && !dfs_num[j])
                    res[i][j]=1;
                else res[i][j]=0;
            }
            res[i][i]=reachables[i]; 

        
    }
}


int main(){
    cin>>t;
    for(int r=1;r<=t;r++){
        cin>>n;
        memset(input, 0, sizeof input);
        memset(input, 0, sizeof res);
        memset(dfs_num, 0, sizeof dfs_num);
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++) cin>>input[i][j];
        bfs(0,-1);
        for(int i=0;i<n;i++) reachables[i]=dfs_num[i];
        
       // for(int i=0;i<n;i++) cout<<dfs_num[i]<<" ";
        calc();
        cout<<"Case "<<r<<":"<<endl;
        for(int i=0;i<n;i++){
            cout<<"+";for(int j=0;j<(2*n)-1;j++) cout<<"-"; cout<<"+"<<endl;
            cout<<"|";for(int j=0;j<n;j++){if(res[i][j]==1) cout<<"Y|"; else cout<<"N|";} cout<<endl;
            
        }
        cout<<"+";for(int j=0;j<(2*n)-1;j++) cout<<"-"; cout<<"+"<<endl;
            
    }
}


        
