#include<stdio.h>
int a[10000][10];
int main()
{
    int n,count,i,m,t,j;
    for(i=0;i<10000;i++){
        m=i;
        while(m>0){
            a[i][m%10]++;
            m/=10;
        }
    }
    for(i=1;i<10000;i++){
        for(j=0;j<10;j++)a[i][j]=a[i][j]+a[i-1][j];
    }

    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        for(i=0;i<9;i++)printf("%d ",a[n][i]);
        printf("%d\n",a[n][i]);
    }


}
