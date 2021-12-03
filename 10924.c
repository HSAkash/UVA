#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,a[1041];
    memset(a,-1,sizeof(a));
    a[0]=0;
    a[1]=1;
    a[2]=1;
    for(i=4;i<=1040;i=i+2)a[i]=0;
    for(i=3;i<=1040;i=i+2){
        if(a[i]==-1)a[i]=1;
        for(j=i+i;j<=1040;j=j+i)a[j]=0;
    }

    int b;
    char s[21];
    while(scanf("%s",s)!=EOF){
        b=0;
        for(i=0;s[i];i++){
            if(s[i]>='a'&&s[i]<='z')b=b+s[i]-96;
            else b=b+s[i]-38;
        }
        if(a[b]==1)printf("It is a prime word.\n");
        else printf("It is not a prime word.\n");
    }

}
