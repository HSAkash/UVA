#include<stdio.h>
#include<math.h>
typedef long long ll;
ll quadratic(ll c)
{
    ll n;
    n=(sqrt(1+4*c)-1)/2;
    return n;
}
int main()
{
    ll n,i,sum,l,u,m,p;
    while(scanf("%lld%lld",&l,&u)!=EOF){
        n=quadratic(2*u);
        m=(l-1)*(l-1+1)/2;
        sum=n;
        while(1){

            p=sum*(sum+1)/2;
            if(p-m>=u){
                printf("%lld\n",sum);
                break;
            }
            sum++;
        }
    }

}
