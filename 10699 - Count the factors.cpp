#include<stdio.h>
int a[1100];
int b[1000];
int main()
{
    int y,z,x;
    b[0]=2;
    for(y=4;y<=1100;y=y+2)a[y]=-1;
    for(y=3,x=1;y<=1100;y=y+2){
        if(a[y]==0){
            b[x]=y;
            x++;
        };
        for(z=y+y;z<=1100;z=z+y)a[z]=-1;
    }

    int n,m,i,count;
    while(scanf("%d",&n)&&n!=0){
        count=0;
        m=n;
        for(i=0;b[i]*b[i]<=n;i++){
            if(n%b[i]==0){
                count++;
                while(m%b[i]==0)m=m/b[i];
            }
        }
        if(m>1)count++;
        printf("%d : %d\n",n,count);
    }
}
