#include<stdio.h>
#include<string.h>
typedef long long ll;
ll gcd(ll a,ll b)
{
    while (b != 0)
    {
        a %= b;
        a ^= b;
        b ^= a;
        a ^= b;
    }
    return a;
}
int main()
{
    ll a,b,c,n,i,k,m;
    double b2;
    while(scanf("%lld",&n)!=EOF){
        while(n--){
            scanf("%lld%lld",&a,&c);
            ll a2[3162],a3[3162];
            b2=(c*1.00)/a;
            b=b2;
            if(b2==b){
                for(i=1,k=0;i*i<=c;i++){
                    if(c%i==0){
                        a2[k]=i;
                        a3[k]=c/i;
                        k++;
                    }
                }
                m=0;
                for(i=0;i<k;i++){
                    if((a2[i]*a)/gcd(a2[i],a)==c){
                        printf("%lld\n",a2[i]);
                        m=1;
                        break;
                    }
                }
                if(m==0){
                    for(i=k-1;i>=0;i--){
                    if((a3[i]*a)/gcd(a3[i],a)==c){
                        printf("%lld\n",a3[i]);
                        m=1;
                        break;
                    }
                }
                }

            }
            else printf("NO SOLUTION\n");
        }
    }
}
