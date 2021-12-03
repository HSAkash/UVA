#include<iostream>
using namespace std;
int main()
{
    int t,n,count,i;
    while(cin>>t){
        count=0;
        for(i=0;i<5;i++){
            cin>>n;
            if(n==t)count++;
        }
        cout<<count<<endl;
    }
}
