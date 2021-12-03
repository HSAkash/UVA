#include<stdio.h>
#include<string.h>
int main()
{
    int d=2,n,i,j,k;
    while(scanf("%d",&n)!=EOF){
        int a[n+1],b[n];
        for(i=1;i<=n;){
            if(a[i]==0)i++;
            if(i>n)i=1;
            if(a[i]==0)a[i++]=-1;
            if(i>n)i=1;
        }

    }
}
