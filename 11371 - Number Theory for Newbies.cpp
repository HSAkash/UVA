#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
typedef long long ll;
int main()
{
    ll n,rn,hn,cn,i,j,k,nk,hk,ck,l,m,p,r,y,z;
    ll a[10],b[10],c[10];
    while(scanf("%lld",&n)!=EOF){
        p=n;
        rn=0;
        k=0;
        for(i=0;i<10;i++)b[i]=0;
        while(p>0){
            r=(p%10);
            a[k++]=r;
            b[r]++;
            p/=10;

        }


        sort(a,a+k);
        hn=0;
        rn=0;
        for(i=k-1;i>=0;i--)hn=hn*10+a[i];

        z=0;
        for(i=0;i<k;i++){
            rn=rn*10+a[i];
            if(rn>0&&z==0){
                for(j=0;j<b[0];j++)rn=rn*10;
                z=1;
            }
        }



        ck=(hn-rn)/9;
        hn=ck*9+rn;

        cn=rn;
        for(i=hn;i>=rn;i=i-9){
            m=i;
            memset(c,0,sizeof(c));
            l=0;


            while(m>0){
                c[m%10]++;
                m=m/10;
            }


            y=0;
            for(j=0;j<10;j++){
                if(b[j]!=c[j]){
                    y=1;
                    break;
                }
            }


            if(y==0){
                cn=i;
                break;
            }
        }
        printf("%lld - %lld = %lld = 9 * %lld\n",cn,rn,cn-rn,(cn-rn)/9);
    }
}


/*
#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
typedef long long ll;
int main()
{
    ll n,rn,hn,cn,i,j,k,nk,hk,ck,l,m,p,r,y;
    ll a[10],b[10],c[10];
    while(scanf("%lld",&n)!=EOF){
        p=n;
        rn=0;
        k=0;
        for(i=0;i<10;i++)b[i]=0;
        while(p>0){
            r=(p%10);
            rn=rn*10+r;
            a[k++]=r;
            b[r]++;
            p/=10;

        }

        sort(a,a+k);
        hn=0;
        for(i=k-1;i>=0;i--)hn=hn*10+a[i];

        cn=rn;
        for(i=rn+9;i<=hn;i=i+9){
            m=i;
            memset(c,0,sizeof(c));
            l=0;


            while(m>0){
                c[m%10]++;
                m=m/10;
            }


            y=0;
            for(j=0;j<10;j++){
                if(b[j]!=c[j]){
                    y=1;
                    break;
                }
            }


            if(y==0){
                cn=i;
            }
        }
        printf("%lld - %lld = %lld = 9 * %lld\n",cn,n,cn-n,(cn-n)/9);
    }
}
*/
