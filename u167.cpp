#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> answers;
vector<int>cur(8);
int board[8][8];

bool place(int x, int y){
    for(int i=0;i<y;i++)
        if(cur[i]==x || abs(cur[i]-x)==abs(y-i)) return false;
    return true;
}

void backtrack(int n){
    if(n==8) {answers.push_back(cur);}
    for(int i=0;i<8;i++)
        if(place(i,n)){
            cur[n]=i;
            backtrack(n+1);
        }
}

int main(){
    backtrack(0);
    int k;cin>>k;
    while(k--){
        int res=-1;
        for(int i=0;i<8;i++)
            for(int j=0;j<8;j++)
                cin>>board[i][j];

        for(int i=0;i<92;i++){
            int m=0;
            for(int j=0;j<8;j++)
                m+=board[answers[i][j]][j];
            res=max(m,res);
        }
        printf("%5d\n",res);
    }

}


