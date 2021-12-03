#include<stdio.h>
#include<string.h>


int main()
{
    char s[102];
    int a[101];
    int i,j,k,l,m,n;


    while(scanf("%s",s)&&s[0]!='0'){

        for(i=0;s[i];i++) a[i]=s[i]-'0';

        n=0;
        for(j=0;j<i;j++){
            m=n*10+a[j];
            n=m-((m/17)*17);
        }

        if(n==0)printf("1\n");
        else printf("0\n");
    }
}
