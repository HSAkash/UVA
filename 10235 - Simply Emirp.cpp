#include<stdio.h>


int rev(int a)
{
    int b=0;
    while(a>0){
        b=b*10+a%10;
        a=a/10;
    }
    return b;
}


int a[1000001];


int main()
{
    int y,z,x;
    a[0]=-1;
    a[1]=-1;
    for(y=4;y<=1000001;y=y+2)a[y]=-1;
    for(y=3,x=1;y<=1000001;y=y+2){
        if(a[y]==0){}
        for(z=y+y;z<=1000001;z=z+y)a[z]=-1;
    }

    int n,e;
    while(scanf("%d",&n)!=EOF){
        e=rev(n);
        if(a[n]==-1)printf("%d is not prime.\n",n);
        else if(a[n]==0&&a[e]==0&&e!=n)printf("%d is emirp.\n",n);
        else printf("%d is prime.\n",n);
    }
}
