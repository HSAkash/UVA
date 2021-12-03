#include<stdio.h>
int main()
{
    int i,sum,count,sum2;
    char s[1010];
    while(scanf("%s",s)&&s[0]!='0'){
        sum=0;
        for(i=0;s[i];i++){
            sum+=s[i]-'0';
        }
        count=0;
        while(sum%9==0){
            count++;
            if(sum==9)break;
            sum2=0;
            while(sum>0){
                sum2+=sum%10;
                sum=sum/10;
            }
            sum=sum2;
        }
        if(count>0)printf("%s is a multiple of 9 and has 9-degree %d.\n",s,count);
        else printf("%s is not a multiple of 9.\n",s);
    }
}
