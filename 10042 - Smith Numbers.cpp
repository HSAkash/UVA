#include<stdio.h>
typedef long long ll;
ll dsum2(ll n)
{
    ll sum=0;
    while(n>0){
        sum=sum+n%10;
        n=n/10;
    }
    return sum;
}
int main()
{
    ll t,n,i,j,k,l,m,dsum,sum;
    while(scanf("%lld",&t)!=EOF){
        while(t--){
            scanf("%lld",&n);
            for(j=n+1;;j++){
                dsum=dsum2(j);
            sum=0;
            m=j;
            for(i=2;i*i<=j;i++){
                while(m%i==0){
                    sum=sum+dsum2(i);
                    m=m/i;
                }
            }
            if(m>1&&m<j)sum=sum+dsum2(m);
            if(dsum==sum){
                printf("%lld\n",j);
                break;
            }
            }
        }
    }
}
