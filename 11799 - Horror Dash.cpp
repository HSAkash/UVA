#include<iostream>
using namespace std;
int main()
{
    int t,n,m,big,i,j;
    cin>>t;
    for(i=1;i<=t;i++){
        cin>>n;
        for(j=0;j<n;j++){
            cin>>m;
            if(j==0)big=m;
            else if(m>big)big=m;
        }
        cout<<"Case "<<i<<": "<<big<<endl;
    }
}
