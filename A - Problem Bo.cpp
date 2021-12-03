#include<stdio.h>
int main()
{
    int t,n,k;
    char s;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&n,&k);
        getchar();
        int c=0,c2=0;
        while(n--&&scanf("%c",&s)){
            if(s>='a'&&s<='z')c++;
            else c2++;
        }
        if(k>=c&&k>=c2)printf("both");
        else if(k>=c2)printf("chef");
        else if(k>=c)printf("brother");
        else printf("none");
        printf("\n");
    }
}
