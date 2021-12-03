#include<stdio.h>
int a[1000001];
int b[500001];
int main()
{
    int y,z,x,k;
    a[0]=-1;
    a[1]=-1;
    b[0]=2;
    for(y=4;y<=1000001;y=y+2)a[y]=-1;
    for(y=3,x=1,k=1;y<=1000001;y=y+2){
        if(a[y]==0){
            b[k]=y;
            k++;
        };
        for(z=y+y;z<=1000001;z=z+y)a[z]=-1;
    }
    int n,i,j;
    while(scanf("%d",&n)&&n>0){
        y=0;
        for(i=0;b[i]<=n/2;i++){
            if(a[n-b[i]]==0){
                printf("%d:\n%d+%d\n",n,b[i],n-b[i]);
                y=1;
                break;
            }
        }
        if(y==0)printf("%d:\nNO WAY!\n",n);
    }
}
