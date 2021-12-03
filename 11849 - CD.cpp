#include<stdio.h>
#include<algorithm>
using namespace std;
int a[10000000];
int b[1000000];
int main()
{
    int n,m,i,k;
    while(scanf("%d%d",&n,&m)&&n!=0&&m!=0){
        int n1=n+m;
        for(i=0;i<n1;i++)scanf("%d",&a[i]);
        sort(a,a+n1);
        for(i=0,k=0;i<n1;i++){
            if(i==0)b[k++]=a[i];
            else{
                if(b[k-1]!=a[i]){
                    b[k++]=a[i];
                }
            }
        }
        n1-=k;
        printf("%d\n",n1);

    }
}
