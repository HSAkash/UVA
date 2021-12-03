#include<stdio.h>
int main()
{
    int a,b,c,i,j,n,e,f;
    while(
    scanf("%d%d",&a,&b)!=EOF){
    if(b>a){
        e=a;
        f=b;
    }
    else {
        e=b;
        f=a;
    }
    for(i=e;i<=f;i++)
    {
        c=i;
        for(j=1; ;j++)
        {
            printf("%d %d\n",c,j);
            if(c==1)break;
            if(c%2==0)c=c/2;
            else c=(c*3)+1;
        }
        if(i==e)n=j;
        else if(n<j)n=j;
    }
    printf("%d %d %d\n",a,b,n);}
    return 0;
}
