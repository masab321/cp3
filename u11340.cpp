#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int n;cin>>n;
    while(n--){
        map<char,double>cost;
        vector<char> pa;
        int k,m;
        double l,res=0;
        char c;
        cin>>k;
        for(int i=0;i<k;i++){
            cin>>c>>l;
            cost[c]=l;//cout<<cost[c]<<endl;
        }
        cin>>m;
        while (m>=0){
            string temp;
            getline(cin,temp);
            for(int i=0;i<temp.size();i++) res+=cost[temp[i]];
            //cout<<temp;
            m--;
            //cout<<cost[c]<<" " <<c<<endl;
        }
        printf("%.2lf$\n",res/100);
        cost.clear();
    }
}

