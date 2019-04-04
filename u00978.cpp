#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    while(n--){
        multiset<int>green,blue;
        int sg,sb,b,k;cin>>b>>sg>>sb;
        for(int i=0;i<sg;i++){cin>>k;green.insert(k);}
        for(int i=0;i<sb;i++){cin>>k;blue.insert(k);}
        
        while(!green.empty()&&!blue.empty()){
            multiset<int>::reverse_iterator  gbegin,bbegin;
            gbegin=green.rbegin(),bbegin=blue.rbegin();
            int tb=min(green.size(),blue.size());
            vector<int>greenv,bluev;
            if(b>tb) b=tb; //cout<<b<<endl;
            for(int i=0;i<b&&!blue.empty()&&!green.empty();i++){
        //cout<<*bbegin<<*gbegin<<endl;
                if(*gbegin > * bbegin){
                    int temp = *gbegin - *bbegin;
                    blue.erase((++bbegin).base());
                    green.erase((++gbegin).base());
                    greenv.push_back(temp);//cout<<temp<<endl;
                }
                else if(*gbegin < *bbegin){
                    int temp = *bbegin - *gbegin;
                    blue.erase((++bbegin).base());
                    green.erase((++gbegin).base());
                    bluev.push_back(temp);//cout<<temp<<endl;
                }
                else{
                    blue.erase((++bbegin).base());
                    green.erase((++gbegin).base());
                }
                
                gbegin=green.rbegin(),bbegin=blue.rbegin();

            }
            for(int r=00;r<greenv.size();r++) green.insert(greenv[r]);
            for(int r=0;r<bluev.size();r++) blue.insert(bluev[r]);
        }
        //cout<<blue.size()<<green.size()<<endl;
        multiset<int>::reverse_iterator i;
        if(!blue.empty()){
            cout<<"blue wins"<<endl;
            for(i= blue.rbegin();i!=blue.rend();i++) cout<< *i<<endl;
        }else if(!green.empty()){
            cout<<"green wins"<<endl;
            for(i= green.rbegin();i!=green.rend();i++) cout<< *i<<endl;
        }
        else cout<<"green and blue died"<<endl;
        if(n>0)
        cout<<endl;
            
                

    }
}
