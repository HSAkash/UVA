#include<stdio.h>
#include<string.h>
#include<math.h>


int main()
{
    int l,a,i;

    char s[10010];
    while(scanf("%s",s)&&s[0]!='0'){
        l=strlen(s);
        if(l&1){
            a=s[0]-'0';
            l-=1;
        }
        else {
            a=(s[0]-'0')*10+(s[1]-'0');
            l-=2;
        }
        a=sqrt(a);
        printf("%d",a);
        for(i=0;i<l/2;i++)printf("0");
        printf("\n");
    }


}

