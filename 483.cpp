#include<stdio.h>
#include<string.h>
char s[1000000];
int main()
{
    int i,j,l,a,b,c,k,d,m;
    char tamp,s2[1000000];
    while(fgets(s,1000000, stdin)){
        l=0;
        for(i=0;s[i];i++){
            if(s[i]==' '||s[i+1]=='\0'){
                d=i;
                if(s[i+1]=='\0')d=i+1;
                if(l==0)b=0;
                else b=a+1;
                c=d-b;
                for(j=b,k=0;j<i;j++,k++)s2[k]=s[j];
                s2[k]='\0';
                for(j=0;j<k/2;j++){
                    tamp=s2[j];
                    s2[j]=s2[k-j-1];
                    s2[k-j-1]=tamp;
                }
                printf("%s",s2);
                if(s[i+1]=='\0')break;
                printf(" ");
                l=1;
                a=i;
            }
        }
        printf("\n");
    }
}

