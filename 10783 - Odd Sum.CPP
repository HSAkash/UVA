
#include<stdio.h>
int main()
{
    int t,a,b,i,j,sum,c,d;
    while(scanf("%d",&t)!=EOF){
        for(i=1;i<=t;i++){
            scanf("%d%d",&a,&b);
            if(a<b){
                c=a;
                d=b;
            }
            else {
                c=b;
                d=a;
            }
            sum=0;
            for(j=c;j<=d;j++)if(j&1)sum=sum+j;
            printf("Case %d: %d\n",i,sum);
        }
    }
}
