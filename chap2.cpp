#include <bits/stdc++.h>
using namespace std;


int main(){
    vector <pair<int,int>> el;
    map<int,vector<int>> adjacencylist;
    int ar[10][10]={0}; // adjacency matrix; taking input as x,y; undirected unweighted;
    int n;cin>>n; //number of edges;
    for(int i=0;i<n;i++){ //el to em. el to al.
        int x,y;cin>>x>>y; ar[x][y]=1;ar[y][x]=1;
        adjacencylist[x].push_back(y);// putting in adjacency list;
        adjacencylist[y].push_back(x);//  ,, 

    }

    //printing adjacency matrix;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            cout<< ar[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"\n\n\n\n";

    //printing adjacency list;
    for(auto i= adjacencylist.begin();i!=adjacencylist.end();i++){
        cout<< i->first<<" : ";
        for(int j=0;j<i->second.size();j++) 
            cout<<i->second[j]<<" ";
        cout<<endl;
    }
    cout<< "\n\n\n";adjacencylist.clear();

    // convert am to el.
    


    //convert al to el.
    

    //convert al to am.


    // convert am to al.

}

