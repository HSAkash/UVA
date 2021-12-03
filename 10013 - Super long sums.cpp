#include<stdio.h>
int a[1000000];
int b[1000000];
int c[1000001];
int main()
{
    int t,i,m,d,j;
    while(scanf("%d",&t)!=EOF){
        while(t--){
            scanf("%d",&m);
            for(i=0;i<m;i++)scanf("%d%d",&a[i],&b[i]);
            d=0;
            for(i=m-1,j=0;i>=0;i--,j++){
                c[j]=(a[i]+b[i]+d)%10;
                d=(a[i]+b[i]+d)/10;
                if(i==0&&d==1){
                    c[j+1]=1;
                    j=j+2;
                    break;
                }
            }
            for(i=j-1;i>=0;i--)printf("%d",c[i]);
            printf("\n");
            if(t>0)printf("\n");
        }
    }
}
