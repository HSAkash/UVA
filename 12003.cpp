#include<stdio.h>
long long int a[300000];
int main()
{
    long long int n, m, u ,L, R, v, p ,k ,i,j;
    while(scanf("%lld%lld%lld",&n,&m,&u)!=EOF){
        for(i=0;i<n;i++){
            scanf("%lld",&a[i]);
        }

        for(j=0;j<m;j++){
            scanf("%lld%lld%lld%lld",&L,&R,&v,&p);
            k=0;
            for(i=L-1;i<R;i++)if(a[i]<v)k++;
            a[p-1]=(u*k)/(R-L+1);
        }
        for(i=0;i<n;i++)printf("%lld\n",a[i]);
    }
}

