#include<iostream>
using namespace std;
int main()
{
    int a[52],i;
    a[0]=1;
    a[1]=1;
    for(i=2;i<52;i++){
        a[i]=a[i-2]+a[i-1];
    }
    int n;
    while(cin>>n&&n!=0)cout<<a[n]<<"\n";
}
