#include<stdio.h>
int main()
{
    int a,b,count,d,e,m,n;
    while(scanf("%d%d",&a,&b)&&a!=-1&&b!=-1){
        if(a>b){
            d=b;
            e=a;
        }
        else{
            d=a;
            e=b;
        }
        m=e-d;
        n=100-e+d;
        m>n?printf("%d\n",n):printf("%d\n",m);

    }
}
