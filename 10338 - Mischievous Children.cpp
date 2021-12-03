#include<stdio.h>
#include<string.h>
typedef long long ll;
ll fcatorial(ll n)
{
    ll i,sum=1;
    for(i=1;i<=n;i++){
        sum=sum*i;
    }
    return sum;
}
int main()
{
    ll n,i,j,k,l,l2;
    char s[21];
    ll a[26];
    while(scanf("%lld",&n)!=EOF){
        getchar();
        for(i=1;i<=n;i++){
            memset(a,0,sizeof(a));
            scanf("%s",s);
            l=strlen(s);
            l2=fcatorial(l);
            for(j=0;j<l;j++){
                a[s[j]-'A']++;
            }
            for(j=0;j<26;j++){
                if(a[j]>1){
                    l2=l2/fcatorial(a[j]);
                }
            }
            printf("Data set %lld: %lld\n",i,l2);
        }
    }
}
