#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    while(scanf("%d%d",&a,&b)&&a>0&&b>0){
        a=sqrt(a-1);
        b=sqrt(b);
        b=b-a;
        printf("%d\n",b);
    }
}
