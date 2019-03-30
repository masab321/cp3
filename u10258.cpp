#include <bits/stdc++.h>
using namespace std;

struct contestant{
    map<int,int> pp;
    std::vector<int>correct{10,0};
};

struct resc{
    int id;
    int solved=0;
    int penalty=0;
};

bool spsort(const resc &a,const resc &b){
    if(a.solved>b.solved) return true;
    if(a.solved==b.solved){
        return (a.penalty<b.penalty);
    }
    return false;
}
                
    


int main(){
    int t;cin>>t;
    scanf("\n");
    while(t--){
        string ar;
        map<int,contestant> input;
        while(getline(cin,ar)&& !ar.empty()){
            contestant ct;
            char l;
            int a,b,c;
            stringstream st;
            st<<ar;
            st>>a>>b>>c>>l;
            if(input[a].correct[b]==0){
                if(l=='I'){
                    c=20;
                    input[a].pp[b]+=c;
                }
                if(l=='C') {
                    input[a].pp[b]+=c;
                    input[a].correct[b]=1;
                }
            }
        }
        vector<resc>results;
        for(auto const &i: input){
            resc rc;
            rc.id=i.first;
            rc.solved=i.second.pp.size();
            int p=0;
            for(auto j:i.second.pp) p+=j.second;
            rc.penalty=p;
            results.push_back(rc);
        }
        sort(results.begin(),results.end(),spsort);
        for(int i=0;i<results.size();i++){
            cout<<results[i].id<<" "<<results[i].solved<<" "<<results[i].penalty<<endl;   
        }            
        cout<<endl;
        input.clear();results.clear();
        
    }
        

}
