#include<stdio.h>
typedef long long ll;
ll a[65540];
ll b[7000];
int main()
{
    ll y,z,x;
    a[0]=-1;
    a[1]=-1;
    b[0]=2;
    for(y=4;y<65540;y=y+2)a[y]=-1;
    for(y=3,x=1;y<65540;y=y+2){
        if(a[y]==0){
            b[x++]=y;
        };
        for(z=y+y;z<65540;z=z+y)a[z]=-1;
    }
    ll n,m,i,count,c;
    while(scanf("%lld",&n)&&n!=0){
        m=n;
        count=1;
        for(i=0;b[i]*b[i]<=n;i++){
            c=0;
            while(m%b[i]==0){
                c++;
                m/=b[i];
            }
            count*=(c+1);
        }
        if(m>1)count*=2;
        count&1?printf("yes\n"):printf("no\n");
    }

}
