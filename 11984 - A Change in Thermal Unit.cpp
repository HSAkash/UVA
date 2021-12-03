#include<stdio.h>
int main()
{
    int c,f,t,i;
    double c2,f2;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d%d",&c,&f);
        f2=(9.00/5.00)*c+f;
        c2=(f2-f)*(5.00/9.00);
        printf("%.02lf\n",c2);
    }

}
