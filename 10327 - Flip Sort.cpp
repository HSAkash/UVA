#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int n,i,j,count,tamp;
    while(scanf("%d",&n)!=EOF){
        int a[n],b[n];
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
            b[i]=a[i];
        }
        count=0;
        for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                tamp=a[j];
                a[j]=a[j+1];
                a[j+1]=tamp;
                count++;
            }
        }
    }
        printf("Minimum exchange operations : %d\n",count);
    }
}
