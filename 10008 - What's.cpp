#include<stdio.h>
#include<string.h>

using namespace std;
int main()
{
    int n,i,j,d,k,m;
    char s2[27]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char s[100000];
    while(scanf("%d",&n)!=EOF){
        getchar();
        int a[26];
        int a2[26];
        memset(a,0,sizeof(a));
        while(n--){
            fgets(s,100000,stdin);
            for(i=0;s[i];i++){
                if(s[i]>='a'&&s[i]<='z'){
                    a[s[i]-97]++;
                }
                else if(s[i]>='A'&&s[i]<='Z'){
                    a[s[i]-65]++;
                }
            }
        }
        m=0;
        for(i=0;i<26;i++)if(a[i]>m)m=a[i];
        for(j=7;j>0;j--){
            for(i=0;i<26;i++){
                if(a[i]==j)printf("%c %d\n",s2[i],j);
            }
        }
    }
}
