#include<bits/stdc++.h>
#include<string.h>

using namespace std;

int main()
{
    int t;
    int a[3000];
    int d[10];
    int n,i,j,b,z,x;
    while(scanf("%d",&n)&&n>0){
       a[0]=1;
       z=1;
        memset(d,0,sizeof(d));
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
      for(i=z-1;i>=0;i--)d[a[i]]++;
      printf("%d! --\n",n);
      printf("   (0) %d (1) %d (2) %d (3) %d (4) %d\n",d[0],d[1],d[2],d[3],d[4]);
      printf("   (5) %d (6) %d (7) %d (8) %d (9) %d\n",d[5],d[6],d[7],d[8],d[9]);
    }
    return 0;
}
