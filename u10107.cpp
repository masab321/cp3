#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<long long> vec; vec.push_back(0);
    long long t,i=1,res;
    while(cin>>t) {
        vec.push_back(t);
        sort(vec.begin(),vec.end());
        if(i==1) cout<<vec[i]<<endl;
        else{
            if(i%2) res= vec[(i/2)+1];
            else res=(vec[i/2]+vec[(i/2)+1])/2;
            cout<<res<<endl;
        }
        i++;
    }

}
