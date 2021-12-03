#include<stdio.h>
#include<string.h>
char s[1000000];
int main()
{
    int i,j,l,a,b,c,k,d;
    char tamp;
    while(fgets(s,1000000, stdin)){
        l=0;
        for(i=0;s[i];i++){
            if(s[i]==' '||s[i+1]=='\0'){
                d=i;
                if(s[i+1]=='\0')d=i+1;
                if(l==0)b=0;
                else b=a+1;
                c=d-b;
                for(j=b,k=0;j<b+(c/2);j++,k++){
                    tamp=s[j];
                    s[j]=s[d-k-1];
                    s[d-k-1]=tamp;
                }
                l=1;
                a=i;
            }
        }
        printf("%s",s);
        //printf("\n");
    }
}

