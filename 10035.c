#include<stdio.h>
typedef long long ll;
int main()
{
    ll n,m,a,b,d;
    while(scanf("%lld%lld",&n,&m)!=EOF){
        if(n==0&&m==0)return 0;
        int c,r;
        if(n>m){
            a=n;
            b=m;
        }
        else{
            a=m;
            b=n;
        }
        d=0;
        c=0;
        while(a>0){
            r=((a%10)+(b%10)+d)/10;
            if(r>0)c++;
            d=r;
            a=a/10;
            b=b/10;
        }
        if(c==0)printf("No carry operation.");
        else if(c==1)printf("%d carry operation.",c);
        else printf("%d carry operations.",c);
        printf("\n");
    }
    return 0;
}
