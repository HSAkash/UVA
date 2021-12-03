#include<stdio.h>
int main()
{
    int n,m,h,i,j,k;
    while(scanf("%d",&n)!=EOF){
        while(n--){
            scanf("%d%d",&m,&h);
            for(k=0;k<h;k++){
                if(k>0)printf("\n");
                for(i=1;i<=m;i++){
                    for(j=0;j<i;j++)printf("%d",i);
                    printf("\n");
                }
                for(i=i-2;i>=1;i--){
                    for(j=0;j<i;j++)printf("%d",i);
                    printf("\n");
                }
            }
            if(n)printf("\n");
        }
    }
}
