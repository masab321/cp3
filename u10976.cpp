#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    while(cin>>t){
        int cnt=1;
        vector<pair<int,int>> answers;
        int x,y; x=2*t;y=2*t; answers.push_back(make_pair(x,y)); cnt++;
        while(x/y!=t){
            ++x;--y;
        }
    }
}
