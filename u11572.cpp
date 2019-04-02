#include<iostream>
#include<map>
#include<vector>
using namespace std;

int main(){
    int n;cin>>n;
    while(n--){
        int t;cin>>t;
        int res=0;int counter=0;
        vector<int> input;
        for(int i=0;i<t;i++){
            int k;cin>>k;input.push_back(k);
        }
        for(int i=0;i<t;i++){
            map<int,int>machine;int c=0;
            for(int j=i;j<t;j++){
                int k=input[j];
                if(machine[k]==0){c++;res=max(c,res);machine[k]++;}
                else {c=0;}

            }
        }

        cout<<res<<endl;
    }
}

