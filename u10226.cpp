#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    scanf("\n");
    while(t--){
        map<string,int> in;
        string species;double s=0;
        while(getline(cin,species) && !species.empty()){
            in[species] ++;s++;
        }
        double hun=100; //cout<<s<<endl;

        for(auto i:in){
            string str= i.first;
            double num =i.second;
            double res=(num* hun)/s;
            cout<<str<<" "<<fixed<<setprecision(4)<<res<<endl;
            //printf("%s %.4ld\n",str,(num* hun)/s);
        }
        if(t>0)
        cout<<endl;
    }
}

