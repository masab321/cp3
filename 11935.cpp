#include <bits/stdc++.h>
using namespace std;
typedef struct{
    double start=0.0;
    string type;
    double rate=0.0;
}event;
vector <event> input(50+1);


bool can(double s){
    return true;
}
void calculate(int index){
    for(int i=1;i<=index;i++) cout<< input[i].start<<" " << input[i].type<<" "<<input[i].rate<<endl;
    return;
}


int main(){
    while(1){
        int index=1;
        double a,b;
        string c,d="";
        cin>>a>>c;
        if(c== "Fuel"){
            cin>>d>>b; 
            if(b==0.0) return 0;
            else{input[index].start=a;input[index].type=c+d;input[index].rate=b;}
        }
        else if(c=="Gas") {cin>>d;input[index].start=a;input[index].type=c+d; }
        else{input[index].start=a;input[index].type=c;}
        if(c=="Goal") {calculate(index); index=0;input.clear();}
       
            index++;
    }
}



