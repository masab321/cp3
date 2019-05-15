#include<bits/stdc++.h>
using namespace std;

int main(){
    int b,c=1;cin>>b;
    while(b--){
        int r,ans=0,sum=0,begin=1,end=1,temp=1,s;cin>>r;
        int rb=begin,re=end,ans2=0;
        vector<pair<int,int> >result;
        for(int i=1;i<r;i++){
            cin>>s;
            sum+=s;
            if(ans<=sum){ 
                ans=sum;end=i+1;begin=temp;
                
                if(end-begin>re-rb||ans>ans2){rb=begin;re=end;ans2=ans;}

            }
            if(sum<0){ sum=0;temp=i+1;}
        }
        
        if(ans>0)
            printf("The nicest part of route %d is between stops %d and %d\n",c++,rb,re);
        else 
    
            printf("Route %d has no nice parts\n",c++); 
       // cout<<ans2<<endl;
       
    }

}

