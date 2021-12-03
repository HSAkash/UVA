#include<stdio.h>
int main()
{
    int n,i,y,k;
    while(scanf("%d",&n)&&n!=0){
        int a[n],b[n];
        y=0;
        for(i=0,k=0;i<n;i++){
            scanf("%d",&a[i]);
            if(a[i]>0){
                b[k++]=a[i];
                y=1;
            }
        }
        if(y==0)printf("0\n");
        else {
            for(i=0;i<k-1;i++)printf("%d ",b[i]);
            printf("%d\n",b[i]);
        }
    }
}
