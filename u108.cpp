#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(cin>>n){
        int temp;
        int grid[n][n];
        for(int i=0;i<n;i++){
            for (int j=0;j<n;j++){
                cin>>temp;
                if(i>0) temp+=grid[i-1][j];
                if(j>0) temp+=grid[i][j-1];
                if(i>0 && j>0) temp-= grid[i-1][j-1];
                grid[i][j]=temp;
            }
        }
    //    for(int i=0;i<n;i++){
    //       for(int j=0;j<n;j++) cout<< grid[i][j]<<" ";
    //        cout<<endl;
    //    }
        int msubrect= -999999999;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                for(int k=i;k<n;k++){
                    for(int l=j;l<n;l++){
                        temp=grid[k][l];
                        if(i>0) temp-=grid[i-1][l];
                        if(j>0) temp-=grid[k][j-1];
                        if(i>0 and j>0) temp+=grid[i-1][j-1];
                        msubrect=max(temp,msubrect);
                    }
                }
            }
        }

        cout<<msubrect<<endl;
    }
}


