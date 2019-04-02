#include <bits/stdc++.h>
using namespace std;

int main(){
    while(1){
label:
        int n,m;cin>>n>>m;
        if(n==0&&m==0) return 0;
        vector<int> calender(1000001,0);
        int con=0;
        vector<int>lm,rm;
        

        //non repetitive.
        for(int i=0;i<n;i++){
            int l,r,t; cin>>l>>r;lm.push_back(l);rm.push_back(r);
            for(int j=l;j<=r;j++){
                if(j==l) {calender[j]=1; continue;}
                if(calender[j]==1){
                    cout<<"CONFLICT\n";
                    con=1;
                    for(int k=i+1;k<n;k++) cin>>l>>r;
                    for(int k=0;k<m;k++)  cin>>l>>r>>t;
                    goto label;
                }
                else calender[j]=1;
            }
        }
        
        //repetatitive
        for(int i=0;i<m;i++){
            int interval , left ,right;
            cin>>left>>right>>interval;
            int flag=1;
            while(flag ==1){
                for(int j=left;j<=right&&j<=1000000;j++){
                    if(j==left||j==right) {calender[j]=1; continue;}
                    if (calender[j]==1) {
                        cout<<"CONFLICT\n";
                        con=1;
                        for(int k=i+1;k<m;i++) cin>>left>>right>>interval;
                        goto label;
                    }
                    else calender[j]=1;
                    if(j==1000000) flag=0;break;
                }
            }
            left+=interval;right+=interval;
            lm.push_back(left);rm.push_back(right);
        }
        if(con==0) cout<<"NO CONFLICT\n";

                
                
    }
}
