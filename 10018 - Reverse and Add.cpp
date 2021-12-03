#include<stdio.h>
typedef long long ll;


ll rev(ll n)
{
    ll sum=0;
    while(n>0){
        sum=sum*10+n%10;
        n/=10;
    }
    return sum;
}

ll palindrom(ll n)
{
   ll m=n,sum=0;
   while(m>0){
    sum=sum*10+m%10;
    m=m/10;
   }
   if(n==sum)return 1;
   else return 0;
}


int main()
{
    ll n,c,t;
    while(scanf("%lld",&t)!=EOF){
        while(t--){
            scanf("%lld",&n);
            c=0;
            do{
                n=n+rev(n);
                c++;
            }while(palindrom(n)==0);
            printf("%lld %lld\n",c,n);
        }
    }
}
