#include<stdio.h>
#include<math.h>
typedef long long ll;


ll prime(ll n)
{
    if (n == 2||n==3||n==5) return 1;
    if(n%2 == 0 || n%3 == 0|| n%5 == 0) return 0;
    ll i,j;
    for (i=7, j=0; i*i<=n; j++){
        if(n%i == 0) return 0;
        if (j%2 == 0) i += 4;
        else i += 2;
    }
    return 1;
}


int main()
{
    ll n,i,j,p,q,m,z;
    while(scanf("%lld",&n)&&n!=0){
        if(n<0)n=-n;
        if(prime(n)==1)printf("-1\n");
        else{
            p=-1;
            m=0;
            z=0;
            for(i=2;i*i<=n;i++){
                if(n%i==0){
                    q=n/i;
                    if(prime(q)==1&&i!=q){
                        printf("%lld\n",q);
                        m=1;
                        z++;
                        break;
                    }
                    if(prime(i)==1&&i>p){
                    p=i;
                    z++;
                    }
                }
            }
            if(m==0&&z>1)printf("%lld\n",p);
            else if(m==0&&z==1)printf("-1\n");
        }
    }
}
