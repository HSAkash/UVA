#include<stdio.h>
int main()
{
    int a,b,c,t,i;
    while(scanf("%d",&t)!=EOF){
        for(i=1;i<=t;i++){
            scanf("%d%d%d",&a,&b,&c);
            if((a>b&&b>c)||(c>b&&b>a))printf("Case %d: %d\n",i,b);
            else if((a>c&&c>b)||(b>c&&c>a))printf("Case %d: %d\n",i,c);
            else printf("Case %d: %d\n",i,a);
        }
    }
}
