#include<stdio.h>
typedef unsigned long long ll;
ll gcd(ll a,ll b)
{
    while (b != 0)
    {
        a %= b;
        a ^= b;
        b ^= a;
        a ^= b;
    }
    return a;
}
int main()
{
    ll t,a,b,n;
    scanf("%llu",&t);
    while(t--){
        scanf("%llu / %llu",&a,&b);
            n=gcd(a,b);
            printf("%llu / %llu\n",a/n,b/n);
    }


    return 0;
}
