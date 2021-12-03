#include<iostream>
#define N '\n'
#define SP ' '
using namespace std;
int main()
{
    int t,n,m,sum;
    cin>>t;
    while(t--){
        cin>>n>>m;
        sum=n+m;
        if(m>n||sum&1)cout<<"impossible"<<N;
        else {
            sum/=2;
            cout<<sum<<SP<<n-sum<<N;
        }

    }
}
