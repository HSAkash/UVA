#include<stdio.h>
# define PI  3.14159265358979323846
int main()
{
    int t,l;
    double w,r,a,v;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&l);
        r=l/5.00;
        w=(l/10.00)*6.00;
        a=PI*r*r;
        v=l*w;
        printf("%.02lf %.02lf\n",a,v-a);
    }
}
