#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
    int n,i,j,b,a[100],k,p,q;
    char s[1000000];
    while(scanf("%d",&n)!=EOF){
        getchar();
        while(n--){
            fgets(s,1000000,stdin);
            for(i=0,k=0;s[i];){
                b=0;
                for(;s[i];i++){
                    if(s[i]==' ')break;
                    b=b*10+(s[i]-'0');
                    if(s[i+2]=='\0')break;
                }
                a[k]=b;
                k++;
                if(s[i+2]=='\0')break;
                i++;
            }
            q=0;
            if(k==1)q=a[0];
            for(i=0;i<k-1;i++){
                p=a[i];
                for(j=i+1;j<k;j++){
                    p=__gcd(a[i],a[j]);
                    if(p>q){
                        q=p;
                    }
                }

            }
            printf("%d\n",q);
        }
    }
}
