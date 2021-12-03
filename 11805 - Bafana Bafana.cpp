#include<iostream>
using namespace std;
int main()
{
    int t,n,k,p,i,r;
    cin>>t;
    for(i=1;i<=t;i++){
        cin>>n>>k>>p;
        r=(k+p)%n;
        if(r==0)r=n;
        cout<<"Case "<<i<<": "<<r<<endl;
    }
}
