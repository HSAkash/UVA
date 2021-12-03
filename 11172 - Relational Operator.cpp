#include<stdio.h>
int main()
{
    int t,n,m;
    while(scanf("%d",&t)!=EOF){
        while(t--){
            scanf("%d%d",&n,&m);
            if(n>m)printf(">\n");
            else if(n<m)printf("<\n");
            else printf("=\n");
        }
    }
}
