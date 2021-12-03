#include<stdio.h>
int b[200];
int main()
{
    int i,j,k,sum,a[200],l,temp,r,t=0,r2=0,r3;
    char s[250];
    while(scanf("%s",s)){
        for(i=0;i<200;i++)a[i]=0;
        for(i=0;s[i]>='0'&&s[i]<='9';i++){
            a[i]=s[i]-'0';
        }
        l=i;
        if(l==1&&s[0]=='0'){
            for(i=r2-1;i>=0;i--)printf("%d",b[i]);
            printf("\n");
            return 0;
        }
        if(t==0)r2=l;
        if(l>r2)r2=l;
        for(i=0;i<l/2;i++){
            temp=a[i];
            a[i]=a[l-i-1];
            a[l-i-1]=temp;
        }
        r=0;
        for(i=0;i<r2;i++){
            r3=r+a[i]+b[i];
            b[i]=r3%10;
            r=r3/10;
        }
        if(r>0)b[r2++]=r;
        t=1;
    }
}
