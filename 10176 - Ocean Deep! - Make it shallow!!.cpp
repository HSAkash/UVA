#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,k=0;
    char ch;
    while(ch=getchar()){
            if(ch==-1)break;
            if(ch=='0'||ch=='1'){
                k=k*2+(ch-'0');
                if(k>131071)k%=131071;
            }
            else if(ch=='#'){
                if(k==0||k==131071)printf("YES\n");
                else printf("NO\n");
                k=0;
            }

    }

}
