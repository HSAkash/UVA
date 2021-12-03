#include<stdio.h>
#include<string.h>
#include<math.h>
typedef long long ll;
int main()
{
    ll a,b,sum,count,i,j,k,l;
    char s[1000];
    while(1==1){
        scanf("%s",s);
        l=strlen(s);
        sum=0;
        for(i=0;s[i];i++,l--){
            a=pow(2,l);
            a=(s[i]-'0')*(a-1);
            sum=sum+a;
        }
        if(sum==0)return 0;
        else printf("%lld\n",sum);
    }
}
