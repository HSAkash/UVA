#include<stdio.h>
int main()
{
    int n,c,t,m;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        if(n%3==0||n%3==2)printf("YES\n");
        else printf("NO\n");

    }

}
