#include<stdio.h>
long long int a,b;
int main()
{
    int i,j,k,sum,k1,k2,k3;
    char s[250];
    while(fgets(s,240,stdin)){
        k=k1=k2=k3=a=b=0;
        for(i=0;s[i+1];i++){
            printf("%c",s[i]);
            if(s[i]>='0'&&s[i]<='9'){
                if(k==0&&k1==0){
                    a=a*10+(s[i]-'0');
                    if(a>2147483647)k1=1;
                }
                else if(k2==0&&(k3==1||k3==2)){
                    b=b*10+(s[i]-'0');
                    if(b>2147483647)k2=1;
                }
            }
            else {
                k=1;
                if(s[i]=='+')k3=1;
                else if(s[i]=='*') k3=2;
            }
        }
        printf("\n");
        if(k1==1)printf("first number too big\n");
        if(k2==1)printf("second number too big\n");
        if((k1==1||k2==1)&&a>0&&b>0)printf("result too big\n");
        else {
            if(k3==1){
                if(a+b>2147483647)printf("result too big\n");
            }
            else if(a*b>2147483647)printf("result too big\n");
        }



    }
}
