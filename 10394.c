#include <stdio.h>
#include <stdlib.h>

typedef long long ll;

ll prime(ll n)
{
    if (n == 2) return 1;
    if(n%2 == 0 || n%3 == 0|| n%5 == 0||n == 1) return 0;

    for (ll i=7, j=0; i*i<=n; j++){
        if(n%i == 0) return 0;
        if (j%2 == 0) i += 4;
        else i += 2;
    }
    return 1;
}

int main()
{
    ll i,j,a[100001][2],p,q,r;
    a[0][0]=3;
    a[0][1]=5;
    a[1][0]=5;
    a[1][1]=7;
    q=1;
    for(i=11,p=2; ;i=i+2){
        r=prime(i+2);
        if(q==1&&r==1){
            a[p][0]=i;
            a[p][1]=i+2;
            p++;
        }
        q=r;
        if(p>100000)break;
    }
    int b;
    while(scanf("%d",&b)!=EOF){
        printf("(%I64d, %I64d)\n",a[b-1][0],a[b-1][1]);
    }
    return 0;
}
