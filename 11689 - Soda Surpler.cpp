#include<iostream>
using namespace std;
int main()
{
    int t,a,b,c,sum,m,count;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        sum=a+b;
        count=0;
        while(sum/c>0){
            m=sum/c;
            count+=m;
            sum=m+(sum%c);
        }
        cout<<count<<endl;
    }
}
