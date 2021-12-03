#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,k,l,c,d,f,p,q,l2;
    char s[501];
    int a[401],b[201];
    while(scanf("%d",&n)!=EOF){
        getchar();
        while(n--){
            fgets(s,500,stdin);
            for(i=0;s[i]!=' ';i++)a[i]=s[i]-'0';
            k=i;
            for(j=k;j<401;j++)a[j]=0;
            for(i=i+1,l=0;s[i];i++,l++)b[l]=s[i]-'0';
            for(j=l-1;j<201;j++)b[j]=0;
            c=0;
            if(k>l-1)d=k;
            else d=l-1;
            for(i=0;i<d;i++){
                f=a[i]+b[i]+c;
                a[i]=f%10;
                c=f/10;
            }
            if(c>0){
                a[i]=c;
                i++;
            }
            for(i=i;a[i]<0;i--);
            for(p=0;a[p]<1;p++);
            for(j=p;j<i;j++)printf("%d",a[j]);
            printf("\n");
        }
    }
}
