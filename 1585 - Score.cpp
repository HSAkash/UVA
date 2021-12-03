#include<stdio.h>
int main()
{
    int t,i,count,sum,k;
    char s[100];
    scanf("%d",&t);
    getchar();
    while(t--){
        scanf("%s",s);
        k=sum=count=0;
        for(i=0;s[i];i++){
            if(s[i]=='O'){
                count++;
                k+=count;
            }
            else{
                sum=sum+k;
                k=count=0;
            }
        }
        printf("%d\n",sum+k);
    }
}
