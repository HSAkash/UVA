#include<stdio.h>
#include<string.h>
#define F1 '('
#define F2 ')'
#define S1 '['
#define S2 ']'

char s[130];
int a[130];
int i,j,k,l,t,m,n,z,f1,f2,s1,s2;
int main()
{
    scanf("%d",&t);
    getchar();
    while(t--&&fgets(s,130,stdin)){
        f1=f2=s1=s2=0;
        for(i=0;s[i+1];i++){
            if(s[i]==F1)f1++;
            else if(s[i]==F2)f2++;
            else if(s[i]==S1)s1++;
            else s2++;
        }
        z=i;
        if(z&1||(f1!=f2)||(s1!=s2)){
            printf("No\n");
        }
        else{
            for(i=0;i<z;i++)a[i]=0;
            m=0;
            for(i=0;i<z;i++){
                if(s[i]==F2){
                    l=i;
                    for(j=l-1;j>=0;j--){
                        if(s[j]==F1&&a[j]==0){
                            a[j]=1;
                            k=l-j;
                            if(k%2==0){
                                m=1;
                                break;
                            }
                            break;
                        }
                    }
                    if(j<0){
                        m=1;
                        break;
                    }
                }
                else if(s[i]==S2){
                    l=i;
                    for(j=l-1;j>=0;j--){
                        if(s[j]==S1&&a[j]==0){
                            a[j]=1;
                            k=l-j;
                            if(k%2==0){
                                m=1;
                                break;
                            }
                            break;
                        }
                    }
                    if(j<0){
                        m=1;
                        break;
                    }
                }
                if(m==1)break;
            }
            if(m==1)printf("No\n");
            else printf("Yes\n");
        }
    }
}

/*#include<stdio.h>
#include<string.h>
#define F1 '('
#define F2 ')'
#define S1 '['
#define S2 ']'

char s[130];
int a[130];
int i,j,k,l,t,m,n,z,f1,f2,s1,s2;
int main()
{
    scanf("%d",&t);
    getchar();
    while(t--&&scanf("%s",s)){
        f1=f2=s1=s2=0;
        for(i=0;s[i];i++){
            if(s[i]==F1)f1++;
            else if(s[i]==F2)f2++;
            else if(s[i]==S1)s1++;
            else s2++;
        }
        z=i;
        if(z&1||(f1!=f2)||(s1!=s2)){
            printf("No\n");
        }
        else if(z==0)printf("Yes\n");
        else{
            for(i=0;i<z;i++)a[i]=0;
            m=0;
            for(i=0;i<z;i++){
                if(s[i]==F2){
                    l=i;
                    for(j=l-1;j>=0;j--){
                        if(s[j]==F1&&a[j]==0){
                            a[j]=1;
                            k=l-j;
                            if(k%2==0){
                                m=1;
                                break;
                            }
                            break;
                        }
                    }
                    if(j<0){
                        m=1;
                        break;
                    }
                }
                else if(s[i]==S2){
                    l=i;
                    for(j=l-1;j>=0;j--){
                        if(s[j]==S1&&a[j]==0){
                            a[j]=1;
                            k=l-j;
                            if(k%2==0){
                                m=1;
                                break;
                            }
                            break;
                        }
                        if(j<0){
                        m=1;
                        break;
                        }
                    }
                }
                if(m==1)break;
            }
            if(m==1)printf("N0\n");
            else printf("Yes\n");
        }
    }
}*/
