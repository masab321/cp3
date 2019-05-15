#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>solutions;
vector<int>correct(8);
bool place(int x, int y){
    for(int i=0;i<y;i++)
        if(x==correct[i] || abs(correct[i]-x) == abs(i-y))
            return false;
    return true;
}

void backtrack(int c){
    if (c==8) solutions.push_back(correct);
    for(int row=0;row<8;row++){
        if(place(row,c)){
            correct[c]=row; backtrack(c+1);
        }
    }
}

int main(){
    backtrack(0);
   
    for(int i=0;i<solutions.size();i++){
        for(int j=0;j<8;j++)
        {solutions[i][j]++;}     
    }
    int c=1;
    vector<int>input(8);
    while(cin>>input[0]){
        for(int i=1;i<8;i++)
            cin>>input[i];
        int ans=7;
        for(int i=0;i<92;i++){
            int current =0;
            for(int j=0;j<8;j++)
                if(solutions[i][j]!= input[j])
                    current++;
            ans=min(current,ans);
        }
        cout<<"Case "<<c++<<": "<<ans<<endl;
    }

}
