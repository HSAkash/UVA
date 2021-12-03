#include<stdio.h>
int main()
{
    int n,t=1;
    while(scanf("%d",&n)&&n>-1){
        int c=0,n2=1;
        while(n>n2){
            n2=n2*2;
            c++;
        }
        printf("Case %d: %d\n",t,c);
        t++;
    }
}
