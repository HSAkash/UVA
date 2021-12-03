#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

ll fun(ll a, ll b, ll &x, ll &y)
{
    if(b==0){
        x=1;
        y=0;
        return a;
    }
    ll x1, y1;
    ll d=fun(b, a%b, x1, y1);
    y=x1-(a/b)*y1;
    x=y1;
    return d;
}

int main()
{
    ll a, b, x, y, d,e,tamp;
    while(scanf("%lld%lld",&a,&b)!=EOF)
    {
        e=a;
        if(a==0){
            tamp=a;
            a=b;
            b=tamp;
        }
        d=fun(a, b, x, y);
        if(a==b||e==0)
        {
            x=0;
            y=1;
        }
        printf("%lld %lld %lld\n",x,y,d);
    }
    return 0;
}
