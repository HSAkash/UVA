#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int t,i,j;
    int a[11];
    while(scanf("%d",&t)!=EOF){
        for(i=1;i<=t;i++){
            int n;
            scanf("%d",&n);
            for(j=0;j<n;j++)scanf("%d",&a[j]);
            sort(a,a+n);
            if(n%2==1){
                printf("Case %d: %d\n",i,a[n/2]);
            }
            else {
                printf("Case %d: %d %d\n",i,a[n/2],a[(n/2)+1]);
            }
        }
    }
}
