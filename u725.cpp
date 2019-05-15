#include <bits/stdc++.h>
using namespace std;

bool isUnique(int a,int b){
    map<char,int> un;
    string  as=to_string(a),bs= to_string(b);
    if(as.size()==4) {string temp="0";temp+=as;as=temp;}

    if(bs.size()==4) {string temp="0";temp+=bs;bs=temp;}
    string res=as+bs;

    
    for(int i=0;i<res.size();i++){
        un[res[i]]++;
        if(un[res[i]]>1) return false;
    }
    return true;
}
int main(){
    int n;cin>>n;
    while(1){
        
        if (n==0) return 0;
        int a=1234,e=98765/n,flag=0;
        for(;a<=e;a++){
            if(isUnique(a,a*n)) {printf( "%.5d / %.5d = %d\n",a*n,a,n);  flag=1;}
        }
        if(flag==0) cout<<"There are no solutions for "<<n<<"."<<endl;
        cin>>n;
        if(n!=0)cout<<endl;
    }
}
