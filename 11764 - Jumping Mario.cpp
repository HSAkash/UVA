#include<stdio.h>
int main()
{
    int n,t,i,j,k,n2,a,b,count,count2;
    while(scanf("%d",&t)!=EOF){
        for(i=1;i<=t;i++){
            scanf("%d",&n);
            k=0;
            count2=count=0;
            while(n--){
                scanf("%d",&n2);
                if(k==0){
                    a=n2;
                    k=1;
                }
                else{
                    b=n2;
                    if(b!=a)b>a?count++:count2++;
                    a=b;
                }
            }
            printf("Case %d: %d %d\n",i,count,count2);
        }
    }
}
