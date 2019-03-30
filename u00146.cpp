#include <bits/stdc++.h>
using namespace std;

int main(){
    while(1){
        string code; cin>> code;
        if(code=="#") return 0;
        if(next_permutation(code.begin(),code.end()))
            cout<<code<<endl;
        else cout<<"No Successor"<<endl;
    }
}
