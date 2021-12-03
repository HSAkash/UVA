#include<stdio.h>
#include<string.h>
int a[46341];
int main()
{
    int y,z;
    memset(a,-1,sizeof(a));
    a[0]=0;
    a[1]=0;
    a[2]=1;
    for(y=4;y<=46341;y=y+2)a[y]=0;
    for(y=3;y<=46341;y=y+2){
        if(a[y]==-1)a[y]=1;
        for(z=y+y;z<=46341;z=z+y)a[z]=0;
    }


    int n,i,j,k,l,m,p,q,x,s;
    while(scanf("%d",&n)!=EOF){
        if(n!=0&&n!=1&&n!=-1){
        m=n;
        printf("%d =",n);
        if(n<0){
            printf(" -1",n);
            n=-n;
        }
        s=n;
            q=0;
            while(n%2==0){
                if(q==0&&m>0){
                    printf(" 2");
                    q=1;
                }
                else printf(" x 2");
                n=n/2;
            }
            for(i=3;i<46341;i=i+2){

                if(a[i]==1){
                    while(n%i==0){
                    if(q==0&&m>0){
                        printf(" %d",i);
                        q=1;
                    }
                    else printf(" x %d",i);
                    n=n/i;
                }
                }
                if(i*i>=s)break;
            }
            if(n>1){
                if(m==n)printf(" %d",n);
                else printf(" x %d",n);
            }



        printf("\n");
    }
    else if(n==0)return 0;
    else if(n==1)printf("1 = \n");
    else if(n==-1){
        printf("-1 = -1 x \n");
    }

    }


    return 0;
}
