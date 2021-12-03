#include<stdio.h>
#include<string.h>
int a[1000000];
int main()
{
    int y,z;
    memset(a,-1,sizeof(a));
    a[0]=0;
    a[1]=0;
    a[2]=1;
    for(y=4;y<=1000000;y=y+2)a[y]=0;
    for(y=3;y<=1000000;y=y+2){
        if(a[y]==-1)a[y]=1;
        for(z=y+y;z<=1000000;z=z+y)a[z]=0;
    }


    long long int n,i,j,k,l,m,p,q,x,s;
    while(scanf("%I64d",&n)!=EOF){
        if(n==0)return 0;
        else if(n==1)printf("1 = \n");
        else if(n==-1){
            printf("-1 = -1 x\n");
        }

        else{
        m=n;
        printf("%I64d =",n);
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
            for(i=3;i<1000000;i=i+2){
                while(n%i==0){
                    if(a[i]==1){
                    if(q==0&&m>0){
                        printf(" %I64d",i);
                        q=1;
                    }
                    else printf(" x %I64d",i);
                    n=n/i;
                }
                }
                if(i*i>s)break;
            }
            if(n>1){
                if(m==n)printf(" %I64d",n);
                else printf(" x %I64d",n);
            }



        printf("\n");
    }

    }


    return 0;
}
