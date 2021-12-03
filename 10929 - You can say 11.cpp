#include<stdio.h>
int main()
{
    int i,sum,count,sum2;
    char s[1010];
    while(scanf("%s",s)){
        sum=sum2=0;
        for(i=0;s[i];i++){
            if(i&1)sum+=s[i]-'0';
            else sum2+=s[i]-'0';
        }
        count=i;
        if(count==1&&s[0]=='0')return 0;
        if((sum-sum2)%11==0)printf("%s is a multiple of 11.\n",s);
        else printf("%s is not a multiple of 11.\n",s);
    }
}

