#include<iostream>
using namespace std;
int main()
{
    int n,m,count,i,g,y;
    while(cin>>n>>m){
        count=0;
        while(n--){
            y=0;
            for(i=0;i<m;i++){
                cin>>g;
                if(g==0)y=1;
            }
            if(y==0)count++;
        }
        cout<<count<<endl;
    }
}
