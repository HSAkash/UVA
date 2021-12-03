#include<stdio.h>
int main()
{
    int n,l,u,i,j,k,a,b,c,count,d,f;
    while(scanf("%d",&n)!=EOF){
        while(n--){
            scanf("%d%d",&l,&u);
            d=0;
            for(i=l;i<=u;i++){
                a=i;
                c=0;
                while(a%2==0){
                    c++;
                    a=a/2;
                }
                count=c+1;

                for(j=3;j*j<=i;j=j+2){
                    c=0;
                    while(a%j==0){
                        c++;
                        a=a/j;
                    }
                    count=count*(c+1);
                }

                if(a>1)count=count*2;
                if(count>d){
                    d=count;
                    f=i;
                }
            }
            printf("Between %d and %d, %d has a maximum of %d divisors.\n",l,u,f,d);
        }
    }


    return 0;
}
