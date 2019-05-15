#include <bits/stdc++.h>
using namespace std;

int main(){
    map<char,vector<int>> ind;
    map <char,int> cur;
    string s;cin>>s;for(int i=0;i<s.size();i++) {ind[s[i]].push_back(i);cur[s[i]]=0;}
    
    int q;cin>>q;
    while(q--){
        for(auto i=cur.begin();i!=cur.end();i++) i->second =0;
        
        string r;cin>>r;
        int left,right,flag=0,pre;
        vector<int>res;
        if(ind[r[0]].empty()) {cout<<"Not matched"<<endl; continue;}
        else{left = ind[r[0]][cur[r[0]]++];pre=left;}
        right=left;
        for(int i=1;i<r.size();i++){
            if(cur[r[i]]>=ind[r[i]].size()) {cout<<"Not matched";flag=1; break;}
            else{
                
                right = ind[r[i]][cur[r[i]]];
                if(pre>right) {cur[r[i]]++;i--;}
                else{pre=right;ind[r[i]][cur[r[i]]++];}
            }
        }
        if(flag==0) cout<<"Matched "<<left<<" "<<right;
        cout<<endl;
    }
}

