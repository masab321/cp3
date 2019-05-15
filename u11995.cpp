#include <bits/stdc++.h>
using namespace std;

bool check_stack(int n, vector<pair<int,int>> &input){
    stack<int> s;
    for(int i=0;i<n;i++){ 
        if(s.empty() && input[i].first==2) return false;
        if(input[i].first==1) s.push(input[i].second);
        else{
            if(input[i].second != s.top()) return false;
            else s.pop();
        }
    }

    return 1;
}

bool check_queue(int n, vector<pair<int,int>> &input){
     queue<int> s;
        for(int i=0;i<n;i++){ 
        if(s.empty() && input[i].first==2) return false;
        if(input[i].first==1) s.push(input[i].second);
        else{
            if(input[i].second != s.front()) return false;
            else s.pop();
        }
    }


    return 1;
}

bool check_priority_queue(int n, vector<pair<int,int>> &input){
    priority_queue<int> s;
        for(int i=0;i<n;i++){ 
        if(s.empty() && input[i].first==2) return false;
        if(input[i].first==1) s.push(input[i].second);
        else{
            if(input[i].second != s.top()) return false;
            else s.pop();
        }
    }

    return 1;
}


int main(){
    int n;
    while(cin>>n){
        bool stk=0,q=0,pq=0;
        vector<pair<int,int>> input;
        for(int i=0;i<n;i++){
            int op,val;cin>>op>>val;
            input.push_back(make_pair(op,val));
        }
        stk= check_stack(n,input);
        q= check_queue(n,input);
        pq= check_priority_queue(n,input);

        if((stk&&q)||(stk&&pq)||(q&&pq))
            cout<<"not sure"<<endl;
        else if(stk) 
            cout<<"stack"<<endl;
        else if(q)
            cout<<"queue"<<endl;
        else if(pq)
            cout <<"priority queue"<<endl;
        else 
            cout<<"impossible"<<endl;
    }
}
