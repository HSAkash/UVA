#include<stdio.h>
#include<math.h>
int main()
{
    int a[10001],c,p,i,n;
    a[0]=0;
    for(i=1;i<10001;i++){
        c=0;
        n=i;
    while(n>0){
        p=sqrt(n);
        n=n-(p*p);
        c++;
    }
    a[i]=c;
    }

    int t,j;
    while(scanf("%d",&t)!=EOF){
        for(i=0;i<t;i++){
            scanf("%d",&j);
            printf("%d\n",a[j]);
        }
    }
    return 0;
}
