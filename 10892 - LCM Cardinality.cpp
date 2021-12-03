#include<stdio.h>
typedef long long ll;
ll gcd(ll a,ll b)
{
    while (b != 0)
    {
        a %= b;
        a ^= b;
        b ^= a;
        a ^= b;
    }
    return a;
}

int main()
{
    ll n,i,j,a2[5000],a3[5000],k,m,z,count;
    while(scanf("%lld",&n)&&n!=0){
        for(i=1,k=0;i*i<=n;i++){
            if(n%i==0){
                a2[k]=i;
                a3[k]=n/i;
                k++;
            }
        }
        z=k-1;
        i=0;
        if(a2[k-1]==a3[k-1])z=z-1;
        for(i=z;i>=0;i--,k++)a2[k]=a3[i];
        count=1;
        for(i=0;i<k-1;i++){
            for(j=i+1;j<k;j++){
                if((a2[i]*a2[j])/gcd(a2[i],a2[j])==n)count++;
            }
        }
        printf("%lld %lld\n",n,count);
    }
}
