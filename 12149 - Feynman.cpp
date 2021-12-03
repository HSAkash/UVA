#include<stdio.h>
int main()
{
    int a[101];
    int i,b;
    b=0;
    for(i=1;i<101;i++)
    {
        b+=i*i;
        a[i]=b;
    }
    while(scanf("%d",&b)&&b!=0){
        printf("%d\n",a[b]);
    }
}
/*
#include<stdio.h>

int main(){
    static unsigned n;

    while(scanf("%u",&n) && n)
        printf("%u\n", n * (n + 1) * (2 * n + 1 ) / 6 );

    return 0;
}
*/
