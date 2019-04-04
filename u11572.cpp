#include<iostream>
#include<map>
#include<vector>
using namespace std;

int main(){
    int n;cin>>n;
    while(n--){
        int t;cin>>t;
        int res=0;int counter=0,start =1;
        map<int,int> last;
        for(int i=1;i<=t;i++){
            int k;cin>>k;
            if(last[k]>=start) {
                res=max(res,i-start);
                start=last[k]+1;
            }
            last[k]=i;
        }
        if(t+1-start>res) res=t+1-start;
        cout<<res<<endl;
    }
}

