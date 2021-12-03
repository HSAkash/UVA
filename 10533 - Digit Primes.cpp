#include<stdio.h>
int a[1000000];
int c[1000000];
int main()
{
    int y,z,x,sum,i;
    a[0]=-1;
    a[1]=-1;
    for(y=2,x=0;y<1000000;y++){
        if(a[y]==0){
            sum=0;
            i=y;
            while(i>0){
                sum=sum+i%10;
                i=i/10;
            }
            if(a[sum]==0){
                x++;
            }
        };
        for(z=y+y;z<1000000;z=z+y)a[z]=-1;
        c[y]=x;
    }
    int t,l,u;
    while(scanf("%d",&t)!=EOF){
        while(t--){
            scanf("%d%d",&l,&u);
            printf("%d\n",c[u]-c[l-1]);
        }
    }

}


/*#include<stdio.h>
int a[1000000];
int b[50000];
int main()
{
    int y,z,x,sum,i;
    a[0]=-1;
    a[1]=-1;
    b[0]=2;
    for(y=4;y<1000000;y=y+2)a[y]=-1;
    for(y=3,x=1;y<1000000;y=y+2){
        if(a[y]==0){
            sum=0;
            i=y;
            while(i>0){
                sum=sum+i%10;
                i=i/10;
            }
            if(a[sum]==0){
                b[x++]=y;
            }
        };
        for(z=y+y;z<1000000;z=z+y)a[z]=-1;
    }
    int t,l,u,count;
    while(scanf("%d",&t)!=EOF){
        while(t--){
            scanf("%d%d",&l,&u);
            count=0;
            for(i=0;b[i]<=u&&i<30123;i++)if(b[i]>=l)count++;
            printf("%d\n",count);
        }
    }

}*/
