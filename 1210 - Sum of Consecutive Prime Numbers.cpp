#include<stdio.h>
int a[10001];
int b[10001];
int c[10001];
int main()
{
    int y,z,x,k;
    a[0]=-1;
    a[1]=-1;
    b[0]=2;
    for(y=4;y<10001;y=y+2)a[y]=-1;
    for(y=3,x=1,k=1;y<10001;y=y+2){
        if(a[y]==0){
            b[k]=y;
            k++;
        };
        for(z=y+y;z<10001;z=z+y)a[z]=-1;
    }
    for(x=0;x<k;x++){
        z=0;
        for(y=x;y<k;y++){
            z=z+b[y];
            if(z>10000)break;
            c[z]++;
        }
    }
    int n;
    while(scanf("%d",&n)&&n>0)
        printf("%d\n",c[n]);
}


/*#include<stdio.h>
int a[10001];
int main()
{
    int y,z,x;
    a[0]=-1;
    a[1]=-1;
    for(y=4;y<10001;y=y+2)a[y]=-1;
    for(y=3,x=1;y<10001;y=y+2){
        if(a[y]==0){};
        for(z=y+y;z<10001;z=z+y)a[z]=-1;
    }
    int n,i,j,k,l,m,sum,count;
    while(scanf("%d",&n)&&n>0){
       if(n>2){
            count=0;
            sum=2;
            for(i=3,k=0;i<=n/2;){
                if(a[i]==0){
                    for(j=i;j<=n/2;j=j+2){
                    if(a[j]==0)sum+=j;
                    if(sum==n){
                        count++;
                        sum=0;
                        break;
                    }
                    if(sum>n){
                        sum=0;
                        break;
                    }
                }
                }
                if(k>0)i=i+2;
                k=1;
            }
            printf("sum=%d\n",sum);
            if(sum>0&&a[n-sum]==0&&(sum!=n-sum))count++;
            if(a[n]==0)count++;
            printf("%d\n",count);
       }
       else printf("1\n");
    }
}
*/

