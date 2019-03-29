#include <bits/stdc++.h>
using namespace std;

void rotate(vector <string> &r){ //rotate 90 degree (clockwise).
    vector<string>temp;
    string t="";
    for(int i=0;i<r.size();i++){
        for(int j= r.size()-1;j>=0;j--){
            t+=r[j][i];
        }
        temp.push_back(t);
        t="";
    }
    r=temp;
}

void rotate_anti(vector<string> &r){
    vector<string>temp;
    string t="";
    for(int i=0;i<r.size();i++){
        for(int j= r.size()-1;j>=0;j--){
            t+=r[j][i];
        }
        temp.push_back(t);
        t="";
    }
    r=temp;
}


int main(){
    int N,n;
    while(1){
        vector<int>result;
        cin>>N>>n;
        if(N==0&&n==0) break;
        vector<string> big,small;
        for(int i=0;i<N;i++){
            string t;cin>>t;big.push_back(t);
        }
        for(int i=0;i<n;i++){
            string t;cin>>t;small.push_back(t);
        }
        for (int i=0;i<4;i++){
            int count=0;
            int c=0;
            for(int j=0;j<=N-n;j++){
                for(int k=0;k<=N-n;k++){
                    if(big[j][k]==small[0][0]){
                        int flag=0;
                        for(int l=0;l<n;l++){
                            for(int m=0;m<n;m++){
                                if(small[l][m]!=big[j+l][k+m]) {
                                    flag=1;break;
                                }
                            }
                            if(flag==1) break;
                            
                        }
                        if(flag==0)
                            c++;
                    }
                }
            }
            result.push_back(c);
            rotate(big);
        }
                    


        swap(result[1],result[3]);
        cout<< result[0]<<" "<<result[1]<<" "<<result[2]<<" "<<result[3]<<endl;
        
        
        



    }
}
