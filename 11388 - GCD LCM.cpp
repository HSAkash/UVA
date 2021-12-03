#include<stdio.h>
int main()
{
    long long int t,a,b;
    scanf("%lld",&t);
    while(t--){
        scanf("%lld%lld",&a,&b);
        if(a==0||b==0)printf("lld %lld\n",a,b);
        else if(b%a==0)printf("%lld %lld\n",a,b);
        else printf("-1\n");
    }
}
