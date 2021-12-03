#include<stdio.h>
#include<string.h>
int main()
{
    int n,m,k,l;
    int a[2000];
    char s[7];
    double r;
    while(scanf("%s %d",&s,&n)!=EOF){
        getchar();
        int i;
        for(i=0;i<2000;i++)a[i]=0;
        r=0.0;
        l=strlen(s);
        for(i=l-1;i>=0;i--)if(s[i]!='0')break;
        l=i;
        for(i=0,k=0;i<=l;i++){
            if(s[i]>='0'&&s[i]<='9'){
                r=r*10.0+s[i]-'0';
                a[k++]=s[i]-'0';

            }
            else if(s[i]=='.') m=i;
        }
        m=k-m;
        int d=0;
        if(m<i){
            d=m*n;
        }
        int tamp;
        for(i=0;i<k/2;i++){
            tamp=a[i];
            a[i]=a[k-i-1];
            a[k-i-1]=tamp;
        }
        int j;
        for(i=1;i<n;i++){
            int b=0,c;
            double c2;
            for(j=0;j<k;j++){
                c=a[j]*r+b;
                b=c/10;
                a[j]=c%10;
            }
            while(b>0){
                a[k++]=b%10;
                b/=10;
            }

        }
        if(s[0]=='.'||(s[0]=='0'&&s[1]=='.')||(s[0]=='0'&&s[1]=='0'&&s[2]=='.')||(s[0]=='0'&&s[1]=='0'&&s[2]=='0'&&s[3]=='.')){
            printf(".");
            for(i=d-1;i>=0;i--)printf("%d",a[i]);
            printf("\n");
        }
        else{
            for(i=k-1;i>=d;i--)printf("%d",a[i]);
            if(d>0){
                printf(".");
                for(;i>=0;i--)printf("%d",a[i]);
            }
            printf("\n");

        }
    }

}
