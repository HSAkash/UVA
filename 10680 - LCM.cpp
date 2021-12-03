
#include<stdio.h>
typedef long long ll;
ll a[1000001];
ll d[1000001];
ll e[1000001];
int main()
{
    ll y,z,x,p;
    ll n,k,i,sum,c,j;
    a[0]=-1;
    a[1]=-1;
    d[1]=1;
    for(y=2;y<1000001;y++){
        if(a[y]==0){
            d[y]=d[y-1]*y;
            while(d[y]%10==0)d[y]/=10;
            d[y]%=100000000000;
            for(z=y+y,p=y*y;z<1000001;z=z+y,p*=y){
                a[z]=-1;
                if(e[z]==0)e[z]=1;
                if(p<1000001){
                    e[p]=y;
                }
                else p=0;
            }
        }
        else{
            d[y]=d[y-1]*e[y];
            while(d[y]%10==0)d[y]/=10;
            d[y]%=100000000000;
        }
    }

    while(scanf("%lld",&n)&&n!=0){

        printf("%lld\n",d[n]%10);

    }
}



/*#include<stdio.h>
typedef long long ll;
ll a[1000001];
ll b[78498];
int main()
{
    ll y,z,x;
    a[0]=-1;
    a[1]=-1;
    b[0]=2;
    for(y=4;y<1000001;y=y+2)a[y]=-1;
    for(y=3,x=1;y<1000001;y=y+2){
        if(a[y]==0)b[x++]=y;
        for(z=y+y;z<1000001;z=z+y)a[z]=-1;
    }


    ll n,k,i,sum,c;
    while(scanf("%lld",&n)&&n!=00){
        sum=1;
        for(i=0;b[i]<=n&&i<78498;i++){
            c=1;
            c*=b[i];
            while(c<=n)c*=b[i];
            c/=b[i];
            sum*=c;
            while(sum%10==0)sum/=10;
            sum%=100000000000;
        }
        printf("%lld\n",sum%10);

    }
}
*/
