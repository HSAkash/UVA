#include<stdio.h>
int main()
{
    int a,b,c,t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d%d%d",&a,&b,&c);
        if(a>20||b>20||c>20)printf("Case %d: bad\n",i);
        else printf("Case %d: good\n",i);
    }
}
