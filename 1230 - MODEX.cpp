#include<stdio.h>
typedef long long ll;
int main()
{
    ll b,p,m,n;
    while(scanf("%lld",&n)&&n!=0){
        while(n--){
            scanf("%lld%lld%lld",&b,&p,&m);
            ll r=1,B=b;
            while(p>0){
                if(p%2==1){
                    r=r*B;
                    r=r%m;
                }
                p=p/2;
                B=B*B;
                B=B%m;

            }
        printf("%lld\n",r);
        }
    }
}

