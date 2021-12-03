#include<stdio.h>
#include<string.h>
int a[1000000];
int main()
{
    int i,j;
    memset(a,-1,sizeof(a));
    a[0]=0;
    a[1]=0;
    a[2]=1;
    for(i=4;i<=1000000;i=i+2)a[i]=0;
    for(i=3;i<=1000000;i=i+2){
        if(a[i]==-1)a[i]=1;
        for(j=i+i;j<=1000000;j=j+i)a[j]=0;
    }
    int b;
    while(scanf("%d",&b)!=EOF){
        if(b==0)return 0;
        if(a[b-2]==1)printf("%d = 2 + %d",b,b-2);
        for(i=3;i<b;i=i+2){
            if(a[i]==1&&a[b-i]==1){
                printf("%d = %d + %d",b,i,b-i);
                break;
            }

        }



        printf("\n");
    }
    return 0;
}


