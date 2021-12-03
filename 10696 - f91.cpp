#include<stdio.h>
typedef long long ll;
int main()
{
    ll n;
    while(scanf("%lld",&n)&&n!=0){
        if(n<=100)printf("f91(%lld) = 91\n",n);
        else printf("f91(%lld) = %lld\n",n,n-10);
    }
}
