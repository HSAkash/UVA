#include<stdio.h>
#include<string.h>
int main()
{
    char s[3000];
    int l,r,i,n,x,z,m,p,q,a;
    while(scanf("%s",&s)!=EOF){
        n=0;
        x=0;
        z=0;
        m=0;
        p=0;
        q=0;
        l=strlen(s);
        r=l-6;
        if(r<0)r=0;
        for(i=r;s[i];i++){
            n=n*10+(s[i]-48);
        }
        for(i=0;s[i];i++){
            m=m+(s[i]-48);
            if(i%2==0)p=p+(s[i]-48);
            else q=q+(s[i]-48);
        }
        a=p-q;
        if(a<0)a=-a;
        if(n%4==0){
            if(n%100==0){
                if(n%400==0){
                    printf("This is leap year.\n");
                    x=1;
                }
            }
            else {
                    printf("This is leap year.\n");
                    x=1;
                }
        }
        if(m%3==0&&(s[l-1]=='5'||s[l-1]=='0')){
            printf("This is huluculu festival year.\n");
            z=1;
        }
        if(x==1){
            if(s[l-1]=='5'||s[l-1]=='0')
            if(a%11==0)printf("This is bulukulu festival year.\n");
        }
        if(x==0&&z==0)printf("This is an ordinary year.\n");
        printf("\n");

    }

}
