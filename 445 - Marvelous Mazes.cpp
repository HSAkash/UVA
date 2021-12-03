#include<stdio.h>
int main()
{
    char s[2000];
    int i,j,k;
    while(fgets(s,1995,stdin)){
        for(i=0;s[i+1];i){
            if(s[i]=='!'){
                printf("\n");
                i++;
            }
            else{
                k=0;
                for(;;){
                    if(s[i]>='0'&&s[i]<='9'){
                       k=k+(s[i]-'0');
                        i++;
                    }
                    else break;

                }
                if(s[i]=='b')while(k--)printf(" ");
                else while(k--)printf("%c",s[i]);
                i=i+1;
            }
        }
        printf("\n");
    }
}
