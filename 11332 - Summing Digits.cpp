#include<stdio.h>
int main()
{
    long long int i,n,r,sum=0,sum1=0,m,sum2=0,p;
    while(scanf("%lld",&n)&&(n>0))
    {
        sum=0;
        while(n>0)
        {
            r=n%10;
            sum=sum+r;
            sum1=0;
            if(sum>9)
            {
                while(sum>0)
            {
                m=sum%10;
                sum1=sum1+m;
                sum=sum/10;
            }
            sum=sum1;
            }
            n=n/10;
        }

        printf("%lld\n",sum);

    }
    return 0;
}



/*#include<stdio.h>
typedef long long ll;
ll sum2(ll n)
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
    ll n,sum;
    while(scanf("%lld",&n)!=EOF){
        if(n==0)return 0;
        sum=0;
        while(n>0){
            sum=sum+n%10;
            if(sum>9)sum=sum2(sum);
            n=n/10;
        }
        printf("%lld\n",sum);
    }
}*/
