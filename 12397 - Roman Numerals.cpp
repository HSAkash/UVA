#include<stdio.h>
int a[101][5];
int main()
{
    int n,j,I,V,X,L,C,D,M,sum;
    while(scanf("%d",&n)!=EOF){
    X=C=L=I=V=M=D=0;
    for(j=0;j<n/1000;j++){
            M++;
    }
    n=n%1000;
    if((n+100)/1000==1){
        C++;
        M++;
        n=n-900;
    }
    for(j=0;j<n/500;j++){
        D++;
    }
    n=n%500;
    if((n+100)/500==1){
        C++;
        D++;
        n=n-400;
    }
    for(j=0;j<n/100;j++){
        C++;
    }
    n=n%100;
    if((n+10)/100==1){
        X++;
        C++;
        n=n-90;
    }
    for(j=0;j<n/50;j++){
        L++;
    }
    n=n%50;
    if((n+10)/50==1){
        X++;
        L++;
        n=n-40;
    }
    for(j=0;j<n/10;j++){
        X++;
    }
    n=n%10;
    if((n+1)/10==1){
        I++;
        X++;
        n=n-9;
    }
    for(j=0;j<n/5;j++){
        V++;
    }
    n=n%5;
    if((n+1)/5==1){
        I++;
        V++;
        n=n-4;
    }
    for(j=0;j<n;j++){
        I++;
    }
    sum=I+V*2+X*2+L*2+C*2+D*3+M*4;
    printf("%d\n",sum);
    }
    return 0;
}



