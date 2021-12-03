#include<stdio.h>
int a[101][5];
int main()
{
    int n,j,X,C,L,I,V,i;
    for(i=1;i<=100;i++){
    n=i;
    X=C=L=I=V=0;
    for(j=0;j<n/100;j++){
        a[i][4]++;
    }
    n=n%100;
    if((n+10)/100==1){
        a[i][2]++;
        a[i][4]++;
        n=n-90;
    }
    for(j=0;j<n/50;j++){
        a[i][3]++;
    }
    n=n%50;
    if((n+10)/50==1){
        a[i][2]++;
        a[i][3]++;
        n=n-40;
    }
    for(j=0;j<n/10;j++){
        a[i][2]++;
    }
    n=n%10;
    if((n+1)/10==1){
        a[i][0]++;
        a[i][2]++;
        n=n-9;
    }
    for(j=0;j<n/5;j++){
        a[i][1]++;
    }
    n=n%5;
    if((n+1)/5==1){
        a[i][0]++;
        a[i][1]++;
        n=n-4;
    }
    for(j=0;j<n;j++){
        a[i][0]++;
    }
    for(j=0;j<5;j++)a[i][j]=a[i][j]+a[i-1][j];
    }
    while(scanf("%d",&n)&&n!=0)
        printf("%d: %d i, %d v, %d x, %d l, %d c\n",n,a[n][0],a[n][1],a[n][2],a[n][3],a[n][4]);
    return 0;
}


