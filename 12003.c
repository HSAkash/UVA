/*#include<stdio.h>
typedef long long ll;
long long int (ll b[],ll L,ll R ,ll v)
{

}
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
*/
#include <stdio.h>
#include <stdlib.h>
int comp (const void * elem1, const void * elem2)
{
    int f = *((int*)elem1);
    int s = *((int*)elem2);
    if (f > s) return  1;
    if (f < s) return -1;
    return 0;
}
int main(int argc, char* argv[])
{
    int x[] = {4,5,2,3,1,0,9,8,6,7};

    qsort (x, sizeof(x)/sizeof(*x), 1, comp);
    printf("%d %d %d\n",sizeof(x),sizeof(*x),sizeof(x)/sizeof(*x));

    for (int i = 0 ; i < 10 ; i++)
        printf ("%d ", x[i]);

    return 0;
}
