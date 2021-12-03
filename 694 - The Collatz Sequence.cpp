#include<stdio.h>
typedef long long ll;

int main()
{
    ll n,i,t=1,l,u,c;
    while(scanf("%lld%lld",&l,&u)&&l>-1&&u>-1){
        c=0;
        n=l;
        while(1==1){
            if(l&1)l=3*l+1;
            else l=l/2;
            c++;
            if(l==1){
                c++;
                break;
            }
            if(l>u)break;
        }
        printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n",t,n,u,c);
        t++;
    }
}
