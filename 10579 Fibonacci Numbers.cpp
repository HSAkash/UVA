#include<stdio.h>
int main()
{
    int n,i,a[1000],x,k,m,d,c,y,z,p[1000],b[1000],j;
    while(scanf("%d",&n)!=EOF){
        for(i=0;i<1000;i++)a[i]=b[i]=p[i]=0;
        a[0]=1;
        b[0]=1;
        k=1;
        for(i=3;i<=n;i++){
            d=0;
            for(j=0;j<k;j++)p[j]=a[j];
            for(j=0;j<k;j++){
                c=b[j]+d+a[j];
                a[j]=c%10;
                d=c/10;
            }
            while(d>0){
                a[k++]=d%10;
                d/=10;
            }
            for(j=0;j<k;j++)b[j]=p[j];
        }
        for(i=k-1;i>=0;i--)printf("%d",a[i]);
        printf("\n");
    }
}
