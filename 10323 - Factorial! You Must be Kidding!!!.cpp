#include<stdio.h>
typedef long long ll;
int main()
{
    ll n,a[6]={40320,362880,3628800,39916800,479001600,6227020800};
    while(scanf("%lld",&n)!=EOF){
        if(n>-1){
            if(n>13)printf("Overflow!\n");
            else if(n>7&&n<14)printf("%lld\n",a[n-8]);
            else printf("Underflow!\n");
        }
        else{
            n&1?printf("Overflow!\n"):printf("Underflow!\n");
        }
    }

}
