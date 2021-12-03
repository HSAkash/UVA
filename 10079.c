#include<stdio.h>
typedef long long ll;
int main()
{
    ll n;
    while(scanf("%lld",&n)!=EOF){
        if(n<0)return 0;
        printf("%lld\n",((n*(n+1))/2)+1);
    }
    return 0;
}
