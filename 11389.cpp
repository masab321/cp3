#include <bits/stdc++.h>
using namespace std;

int  main(){
    int n,d,r;
    while(1){
        cin>>n>>d>>r;
        if(n==0&&d==0 and r==0) return 0;
        vector<int > input(n),input2(n);
        long long total=0;
        for (int i=0 ;i<n;i++)  {cin>>input[i];}
        sort(input.begin(),input.end());
        for(int i=0;i<n;i++) cin>>input2[i];
        sort(input2.begin(),input2.end());
        reverse(input2.begin(),input2.end());
        long long over=0;
        for(int i=0;i<n;i++){if(input[i]+input2[i]>d) over+=(input[i]+input2[i]-d);}
        cout<<over*r<<endl;
    }
}
