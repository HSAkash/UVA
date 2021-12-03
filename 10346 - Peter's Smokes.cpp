#include<stdio.h>
typedef long long ll;
int main()
{
    ll n,k,count,m;
    while(scanf("%lld%lld",&n,&k)!=EOF){
        count=n;
        while(n/k>0){
            m=n%k;
            count+=(n/k);
            n=(n/k)+m;
        }
        printf("%lld\n",count);
    }
}
