#include<stdio.h>
int main()
{
    int t,n,i;
    char c;
    while(scanf("%d",&t)!=EOF){
        for(i=0;i<t;i++){
            if(i==0)scanf("%d",&n);
            else scanf("%c%d",&c,&n);
            if(n==2||n==3||n==5||n==7||n==13||n==17)printf("Yes\n");
            else printf("No\n");
        }

    }
    return 0;
}

