#include<stdio.h>
#include<string.h>
int main()
{
    int a[500],a2[500],a3[500];
    int i,j,n,b,z,c,d,x,k;
    while(scanf("%d%d",&n,&d)!=EOF){
        if(d>0){
            if(n>1&&d>1){
                c=d;
                memset(a,0,sizeof(a));
                memset(a2,0,sizeof(a2));
                memset(a3,0,sizeof(a3));
                for(i=0;c>0;i++){
                    a[i]=c%10;
                    a2[i]=a[i];
                    c=c/10;
                }
                z=i;
                for(i=2;i<=n;i++){
                    b = 0;
                    for(j=0;j<z;j++){
                        x = a[j]*d+b;
                        a[j]=x%10;
                        b = x/10;
                    }
                    while(b>0){
                        a[z]=b%10;
                        b = b/10;
                        z++;
                    }
                    b = 0;
                    for(j=0;j<z;j++){
                        x = a[j]*i+b;
                        a3[j]=x%10;
                        b = x/10;
                    }
                    while(b>0){
                        a3[j]=b%10;
                        b = b/10;
                        j++;
                    }
                    k=j;


                    b=0;
                    for(j=0;j<k;j++){
                        x = a2[j]+a3[j]+b;
                        a2[j]=x%10;
                        b = x/10;
                    }
                    while(b>0){
                        a2[j]=b%10;
                        b = b/10;
                        j++;

                    }
                    k=j;
                }
                for(i=k-1;i>=0;i--)printf("%d",a2[i]);
                printf("\n");
            }
            else if(d==1&&n>1){
                for(i=2;i<=n;i++)d=d+i;
                printf("%d\n",d);
            }
            else printf("%d\n",d);
        }
        else printf("0\n");
    }
}
