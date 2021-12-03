#include<stdio.h>
typedef long long ll;
int main()
{
    ll n,m,p,b,i;
    while(scanf("%lld%lld",&n,&m)!=EOF){
        p=n-m+1;
        b=1;
       for(i=p;i<=n;i++){
            b=b*i;
            while(b%10==0)b/=10;
            b=b%100000000000;
      }
      printf("%lld\n",b%10);
    }
}




/*#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    int a[3000];
    int n,i,j,b,z,x;
    while(scanf("%d",&n)==1){
       a[0]=1;
       z=1;

       b = 0;
       for(i=1;i<=n;i++){
            for(j=0;j<z;j++){
               x = a[j]*i+b;
               a[j]=x%10;
               b = x/10;
            }
             while(b>0){
               a[z]=b%10;
               b = b/10;
               z++;
             }
      }
      printf("%d!\n",n);
      for(i=z-1;i>=0;i--)
      printf("%d",a[i]);
      printf("\n");
    }
    return 0;
}
*/
