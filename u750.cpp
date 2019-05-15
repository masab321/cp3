#include <bits/stdc++.h>
using namespace std;

int row[8],a,b,linecounter;


bool place(int r,int c){
    for(int pre=0;pre<c;pre++){
        if(row[pre]==r||(abs(row[pre]-r)== abs(pre-c))) return false;
    }
    return true;
}

void backtrack(int c){
    if(c==8 && row[b]==a){
        printf("%2d      %d",linecounter++, row[0]+1);
        for(int j=1;j<8;j++) printf(" %d",row[j]+1);
        cout<<endl;
    }
    for(int r=0;r<8;r++){
        if(place(r,c)){
            row[c]=r;backtrack(c+1);
        }
    }
}



int main(){
    int tc;cin>>tc;
    while(tc--){
        cin>>a>>b;--a;--b;linecounter=1;
        memset(row, 0, sizeof row);
        cout<<"SOLN       COLUMN"<<endl;
        cout<<" #      1 2 3 4 5 6 7 8\n"<<endl;
        backtrack(0);
        if(tc) cout<<endl;
    }
}
