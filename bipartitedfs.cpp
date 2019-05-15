#include <bits/stdc++.h>
using namespace std;

int dfs_num[100];
bool isbipartite =true;
int color[100],input[100][100];
int n;

bool bipartite(int u,int c){
    if (!isbipartite)  return false;
    dfs_num[u]=1;
    color[u]=c;
    for(int i=0;i<n;i++){
        if(input[u][i]==1){
            color[i]=1-c;
            if(color[u]==color[i]) isbipartite =false;
            if(dfs_num[i]=0)
                bipartite(i,1-c);
        }
    }
    return isbipartite;
}


int main(){
    memset(color , 0, sizeof color);
    memset(dfs_num,0, sizeof dfs_num);
    cin>>n;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>input[i][j];
    color[0]=1;
    for(int i=0;i<n;i++)
        if(dfs_num[i]==0)
            bipartite(i,color[i]);
    cout<<isbipartite<<endl;


}
