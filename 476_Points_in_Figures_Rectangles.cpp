#include<iostream>

using namespace std;

int main(){
    double r[10][4];
    char c;
    double x,y;
    bool contained;
    int i=0,n;
    
    for(; ; i++){
        cin>>c;
        if(c=='*') break;
        if(c=='r')cin>>r[i][0]>>r[i][1]>>r[i][2]>>r[i][3];
    }
    n=i;
    for(int j = 1; ;j++){
        cin>>x>>y;
        if(x==9999.9 && y==9999.9) break;
        
        contained=false;
        
        for(int i=0;i<n;i++)
            if(x>r[i][0] && x<r[i][2] && y<r[i][1] && y>r[i][3]){
                cout<<"Point "<<j<<" is contained in figure "<<i+1<<endl;
                contained=true;
            }
        if(!contained) cout<<"Point "<<j<<" is not contained in any figure"<<endl;
    }
    
    return 0;
}