#include<stdio.h>
#include<string.h>
#include<math.h>
int a[1299759];
int main()
{
    int y,z,x;
    a[0]=-1;
    a[1]=-1;
    for(y=4;y<=1299759;y=y+2)a[y]=-1;
    for(y=3;y<=1299759;y=y+2){
        if(a[y]==0){};
        for(z=y+y;z<=1299759;z=z+y)a[z]=-1;
    }
    int n,b,i;
    while(scanf("%d",&n)&&n!=0){
        if(a[n]==0||n==1)printf("0\n");
        else{
            for(i=n+1;a[i]!=0;i++);
            b=i;
            for(i=n-1;a[i]!=0;i--);
            printf("%d\n",b-i);
        }
    }
}
