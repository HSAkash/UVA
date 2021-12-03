
/*#include<bits/stdc++.h>
using namespace std;
int egcd(int a, int b, int &x, int &y);

int main()
{
    int a, b, x, y, ans;
    while(cin>>a>>b)
    {
        ans=egcd(a, b, x, y);
        if(a==b)
        {
            x=0;
            y=1;
        }
        cout<<x<<" "<<y<<" "<<ans<<endl;
    }
    return 0;
}

int egcd(int a, int b, int &x, int &y)
{
    printf("1. a=%d b=%d \n",a,b);
    if(a==0){
            x=0;
            y=1;
        return b;
    }
    int x1, y1;
    int d=egcd(b%a, a, x1, y1);
    x=y1-(b/a)*x1;
    y=x1;
    printf("2. a=%d b=%d x=%d y=%d\n",a,b,x,y);
    return d;
}*/
#include<stdio.h>
typedef long long ll;
int main()
{
    ll n,m,x,y,d,i,a[100000][2],b,c,tamp,e;
    while(scanf("%lld%lld",&n,&m)){
        e=n;
        if(n==0){
            tamp=n;
            n=m;
            m=tamp;
        }
        for(i=0; ;i++){
            if(m==0){
                x=1;
                y=0;
                d=n;
                break;
            }
            a[i][0]=n;
            a[i][1]=m;
            b=n;
            n=m;
            m=b%m;
        }
        for(i=i-1;i>=0;i--){
            c=y;
            y=x-(a[i][0]/a[i][1])*y;
            x=c;
        }
        if(e>0)printf("%lld %lld %lld\n",x,y,d);
        else printf("0 1 %lld\n",d);
    }
    return 0;
}

