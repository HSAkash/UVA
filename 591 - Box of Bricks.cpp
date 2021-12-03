#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int n,i,sum,j,c,k,count,sum2,t=1;
    while(scanf("%d",&n)&&n!=0){
        int a[n];
        int b[n];
        sum=0;
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
            sum=sum+a[i];
        }
        sum/=n;
        count=0;
        for(i=0;i<n;i++){
            if(a[i]>sum)count+=a[i]-sum;
        }
        printf("Set #%d\n",t);
        printf("The minimum number of moves is %d.\n\n",count);
        t++;
    }
}
