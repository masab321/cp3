#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    while(1){
        cin>>n;if (n==0) break;
        long long res=0,temp=0;
        priority_queue<int,vector<int>,greater<int>> pq;
        for(int i=0;i<n;i++){cin>>k; pq.push(k);}
        for(auto i=0;pq.size()!=1;i++)
        {
            temp=pq.top();pq.pop();
            temp+=pq.top();res+=temp;pq.pop();pq.push(temp);
        }
        cout<<res<<endl;
    }
}

