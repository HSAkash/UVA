#include<stdio.h>
int a[5001];
int main()
{
    int i,j,k,c,b[10],m,u,l;
    for(i=1,c=0;i<5001;i++){
        for(j=0;j<10;j++)b[j]=0;
        m=i;
        k=0;
        while(m>0){
            if(b[m%10]==1){
                k=1;
                break;
            }
            b[m%10]=1;
            m/=10;
        }
        if(k==0)c++;
        a[i]=c;
    }
    while(scanf("%d%d",&l,&u)!=EOF){
        l=l-1;
        if(l<0)l=0;
        printf("%d\n",a[u]-a[l]);
    }
}
