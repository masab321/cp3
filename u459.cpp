#include <bits/stdc++.h>
using namespace std;

int dfs_num[30],size;
map <int,set<int>> input;

void dfs(int u){
    for(auto i=input[u].begin();i!=input[u].end();i++)
        if(!dfs_num[*i]){
            //cout<<*i<<endl;
            dfs_num[*i]=1;
            dfs(*i);
        }
}

int main(){
    freopen("input","r",stdin);
    int n;
    char loka;
    scanf("%d\n\n",&n);
    while(n--){
        memset(dfs_num,0,sizeof dfs_num);
        input.clear();
        char c;
        scanf("%c\n",&c);
        size=c-'A';size++;
        //cin>>c;
        char s,d;
        int count=0;
        while(scanf("%c",&s)){
            if(s=='\n') break;
            scanf("%c\n",&d);cout<<s<<d<<endl;
            input[int(s-'A')].insert(d-'A');
            input[int (d-'A')].insert(s-'A');
        }
        for(int i=0;i<size;i++)
            if(dfs_num[i]==0){
                dfs(i);
                count++;
            }
        cout<<count<<endl;
        cout<<endl;
    }
}   

