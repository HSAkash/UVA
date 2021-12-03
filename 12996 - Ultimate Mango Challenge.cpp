#include<iostream>
using namespace std;
int main()
{
    int t,n,l,i,m,j,y,count;
    while(cin>>t){
        for(j=1;j<=t;j++){
            cin>>n>>l;
            int a[n];
            count=0;
            for(i=0;i<n;i++){
                cin>>a[i];
                count+=a[i];
            }
            y=0;
            for(i=0;i<n;i++){
                cin>>m;
                if(a[i]>m)y=1;
            }
            if(count>l||y==1)cout<<"Case "<<j<<": No\n";
                else cout<<"Case "<<j<<": Yes\n";

        }
    }
}
