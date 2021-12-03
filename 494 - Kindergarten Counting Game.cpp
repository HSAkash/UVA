#include<stdio.h>
int main()
{
    char s[2000];
    int i,count,f;
    while(fgets(s,1995,stdin)){
        f=0;
        count=0;
        for(i=0;s[i];i++){
            if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))f=1;
            else{
                count=count+f;
                f=0;
            }
        }
        count=count+f;
        printf("%d\n",count);
    }
}
