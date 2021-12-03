#include<stdio.h>
#include<string.h>
int main()
{
    char s;
    while(scanf("%c",&s)!=EOF){
        if(s!='\n')printf("%c",s);
        else printf("\n");
    }
}
