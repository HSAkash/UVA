#include<stdio.h>
typedef long long ll;

ll t[1000001];
ll t2[500001];


void sever(ll *t,ll *t2)
{
   ll y,z,x,k;
    t[0]=-1;
    t[1]=-1;
    t2[0]=2;
    for(y=4;y<=100001;y=y+2)t[y]=-1;
    for(y=3,x=1,k=1;y<=100001;y=y+2){
        if(t[y]==0){
            t2[k]=y;
            k++;
        }
        for(z=y+y;z<=100001;z=z+y)t[z]=-1;
    }
}


ll prime(ll n)
{

    ll i;
    for(i=0;t2[i]*t2[i]<=n;i++){
        if(n%t2[i]==0)return 0;
    }
    return 1;
}


int main()
{

    sever(t,t2);
    ll i,j,k,l,u,l2,u2,l3,u3,a,m,n,m2,n2,p;
    while(scanf("%lld%lld",&l,&u)!=EOF){
        l2=l3=u2=u3=m=0;
        for(i=l,k=0;i<=u;i++){
            if(i%2==0&&i!=2){}
            else{
                p=0;
            if(i<1000001){
                if(t[i]==0)p=1;
            }
            if(i>1000000){
                if(prime(i)==1)p=1;
            }
            if(p==1){
                if(k>0){
                    n2=m2=i-a;
                    if(n2<n){
                        l2=a;
                        u2=i;
                        n=n2;
                    }
                    if(m2>m){
                        l3=a;
                        u3=i;
                        m=m2;
                    }
                }
                else {
                    n=i;
                    k=1;
                }
                a=i;
            }
            }
        }
        if(l2>0&&u2>0)printf("%lld,%lld are closest, %lld,%lld are most distant.\n",l2,u2,l3,u3);
        else printf("There are no adjacent primes.\n");
    }
}









/*#include<stdio.h>
typedef long long ll;
ll prime(ll n)
{
    if (n == 2||n==3||n==5) return 1;
    if(n%2 == 0 || n%3 == 0|| n%5 == 0||n == 1) return 0;
    ll i,j;
    for (i=7, j=0; i*i<=n; j++){
        if(n%i == 0) return 0;
        if (j%2 == 0) i += 4;
        else i += 2;
    }
    return 1;
}

int main()
{
    ll i,j,k,l,u,l2,u2,l3,u3,a,m,n,m2,n2;
    while(scanf("%lld%lld",&l,&u)!=EOF){
        if(l%2==0)l=l+1;
        l2=l3=u2=u3=m=0;
        for(i=l,k=0;i<=u;i+=2){
            if(prime(i)==1){
                if(k>0){
                    n2=m2=i-a;
                    if(n2<n){
                        l2=a;
                        u2=i;
                        n=n2;
                    }
                    if(m2>m){
                        l3=a;
                        u3=i;
                        m=m2;
                    }
                }
                else {
                    n=i;
                    k=1;
                }
                a=i;
            }
        }
        if(l2>0&&u2>0)printf("%lld,%lld are closest, %lld,%lld are most distant.\n",l2,u2,l3,u3);
        else printf("There are no adjacent primes.\n");
    }
}
*/
