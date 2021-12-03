#include<stdio.h>
typedef long long ll;
int main()
{
    ll n,d,a[1000],i,j;
    while(scanf("%lld%lld",&n,&d)!=EOF){
        if(n==0||n==1||d==0||d==1)printf("Boring!\n");
        else{
            i=0;
        a[i++]=n;
        while(n%d==0){
            a[i++]=n/d;
            n=n/d;
        }
        if(n>1)printf("Boring!\n");
        else{
            printf("%lld",a[0]);
            for(j=1;j<i;j++)printf(" %lld",a[j]);
            printf("\n");
        }
        }
    }
}
