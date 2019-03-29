#include  <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> gn;
    int n;cin>>n;
    vector<int>lis(n,1);
    while(n--){int k;cin>>k;gn.push_back(k);}
    int max=-99999999,cm=1;
    for(int i=1;i<gn.size();i++){
        for(int j=0;j<i;j++){
            if(gn[i]>gn[j] &&lis[i]<lis[i]+lis[j]) lis[i]=lis[j]+1;
            //cout<<lis[4]<<endl;
        }
    }
    for(int i=0;i<lis.size();i++){
        if(lis[i]>cm)cm=lis[i];
        //cout<<lis[i]<<"  ";
    }
    cout<<cm;
}

