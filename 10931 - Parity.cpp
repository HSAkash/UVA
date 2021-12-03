#include<stdio.h>
int main()
{
    int n,i,r,c;
    char s[50];
    while(scanf("%d",&n)&&n!=0){
        i=0;
        c=0;
        while(n>0){
            r=n%2;
            if(r==0)s[i++]='0';
            else {
                s[i++]='1';
                c++;
            }
            n=n/2;
        }
        s[i]='\0';
        printf("The parity of ");
        for(i=i-1;i>=0;i--)printf("%c",s[i]);
        printf(" is %d (mod 2).\n",c);
    }
}
