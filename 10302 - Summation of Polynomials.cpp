#include<stdio.h>
typedef long long ul;
ul a[50001],b;
int main()
{
    ul i;
    b=0;
    for(i=1;i<50001;i++){
        b+=i*i*i;
        a[i]=b;
    }
    ul n;
    while(scanf("%lld",&n)!=EOF){
        printf("%lld\n",a[n]);
    }
}
/*
#include<cstdio>

using namespace std;

int main(){
    int x;
    long long ans;

    while(scanf("%d",&x)==1){
        ans=1;
        ans=ans*x*(x+1)/2;
        ans=ans*x*(x+1)/2;
        printf("%lld\n",ans);
    }

    return 0;
}*/
