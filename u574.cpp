#include<bits/stdc++.h>
using namespace std;

vector<int> input(12);
int t,n,sum=0;
bool flag=0;
vector<int> result(12);
void display(int c){
    cout<<result[0];
    for(int i=1;i<c;i++)
        printf("+%d",result[i]);
    cout<<endl;
}

void backtrack(int c){
    if(sum==t){
        display();flag=1;
    }
    for(int i=0;i<n;i++){
        if(sum+input[c]<=t){sum+=input[c]

}

int main(){
    while(true){
        cin>>t>>n;
        flag=0;
        for(int i=0;i<n;i++)
            cin>>input[i];
        printf("Sums of %d:\n",t);
        backtrack(0);
        if(!flag) cout<<"NONE"<<endl;
    }
}

