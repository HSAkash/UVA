#include<stdio.h>
int a[10001];
int main()
{
    int i,j;
    a[0]=2;
    a[1]=2;
    a[2]=1;
    for(i=4;i<10001;i=i+2)a[i]=2;
    for(i=3;i<10001;i=i+2){
        if(a[i]==0)a[i]=1;
        for(j=i+i;j<10001;j=j+i)a[j]=2;
    }

    int m,n,b;
    while(scanf("%d",&m)!=EOF){
        for(i=0;i<m;i++){
            scanf("%d",&n);
            b=(n/2)+1;
            if(b%2==0)b=b+1;
            for(j=b;j<=n;j=j+2){
                if(a[j]==1){
                    printf("%d\n",j);
                    break;
                }
            }
        }
    }
    return 0;
}
