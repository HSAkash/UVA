#include<stdio.h>
#include<string.h>
int a[32770];
int main()
{
    int i,j;
    memset(a,-1,sizeof(a));
    a[0]=0;
    a[1]=0;
    a[2]=1;
    for(i=4;i<=32770;i=i+2)a[i]=0;
    for(i=3;i<=32770;i=i+2){
        if(a[i]==-1)a[i]=1;
        for(j=i+i;j<=32770;j=j+i)a[j]=0;
    }
    int b,c;
    while(scanf("%d",&b)!=EOF){
        c=0;
        if(b==0)return 0;
        if(a[b-2]==1)c++;
        for(i=3;i<=b/2;i=i+2){
            if(a[i]==1&&a[b-i]==1)c++;
        }
        printf("%d\n",c);
    }
    return 0;
}


