#include<bits/stdc++.h>
using namespace std;
vector<int> input;
int binary_search(int left, int right,int key){
    int i;
    while(left<=right){
        i=(left+right)/2;// cout<<input[i]<<endl;
        if(input[i]==key) return i;
        else if(input[i]<key) left=i+1;
        else right=i-1;
    }
    
    return -1;
}

int main(){
int n;
while(cin>>n){
        input.clear();
        for(int i=0;i<n;i++) {int k; cin>>k; input.push_back(k);}
        int total,first,second,key,r1,r2,ans=10000000;cin>>total;
        sort(input.begin(),input.end());
        for(int i=0;i<n-1;i++){
            first=input[i];
            key=total-first;
            int test=binary_search(i+1,n-1,key);// cout<<input[i]<<" "<<test<<endl;
            if(test==-1);
            else{ second=input[test]; 
                if(abs(first-second)<ans){r1=first;r2=second;}
            }

        }
        cout<<"Peter should buy books whose prices are "<<r1<< " and "<<r2<<".\n"<<endl;
    }
}
