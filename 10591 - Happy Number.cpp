#include<stdio.h>
int a[100000];
int happy(int i)
{
    int m=a[i-1],n=0,sum,j;
    while(m>0){
        sum=m%10;
        n=n+sum*sum;
        m/=10;
    }
    a[i]=n;
    if(a[i]==1)return 1;
    for(j=0;j<i-1;j++){
        if(a[j]==a[i])return 0;
    }
    return happy(i+1);

}
int main()
{
    int n,i,t;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d",&n);
        a[0]=n;
        if(happy(1)==1)printf("Case #%d: %d is a Happy number.\n",i,n);
        else printf("Case #%d: %d is an Unhappy number.\n",i,n);
    }
}

/*#include<stdio.h>
int happy(int a[],int i)
{
    int m=a[i-1],n=0,sum,j;
    while(m>0){
        sum=m%10;
        n=n+sum*sum;
        m/=10;
    }
    a[i]=n;
    if(a[i]==1)return 1;
    for(j=0;j<i-1;j++){
        if(a[j]==a[i])return 0;
    }
    i++;
    int r=happy(a,i);
}
int main()
{
    int n,i,a[100000],t;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d",&n);
        a[0]=n;
        if(happy(a,1)==1)printf("Case #%d: %d is a Happy number.\n",i,n);
        else printf("Case #%d: %d is an Unhappy number.\n",i,n);
    }
    return 0;
}*/
