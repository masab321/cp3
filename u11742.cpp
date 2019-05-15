#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    while(1){
        cin>>n>>m;if(n==0&& m==0) return 0;
        int a[n];for(int i=0;i<n;i++) a[i]=i;
        int ar[m][3]; for(int i=0;i<m;i++) cin>>ar[i][0]>>ar[i][1]>>ar[i][2];
        int cnt=0;
        do{
            bool seat= true;
            for(int i=0;i<m;i++){
                int pos1,pos2;
                for(int j=0;j<n;j++)
                    if(a[j]==ar[i][0])
                        pos1=j;
                for(int j=0;j<n;j++)
                    if(a[j]==ar[i][1])
                        pos2=j;
                if(ar[i][2]>0){
                    if(abs(pos1-pos2)> abs(ar[i][2])){ seat=false ;break;}
                }
                if(ar[i][2]<0){
                    if(abs(pos1-pos2)< abs(ar[i][2])){ seat=false ;break;}
                }
            }
            if(seat) cnt++;

        }while(next_permutation(a,a+n));

        cout<<cnt<<endl;
    }
}
