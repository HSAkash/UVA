#include<stdio.h>
typedef long long ll;
ll a[31622];
ll b[3500];
int main()
{
    ll y,z,x;
    a[0]=-1;
    a[1]=-1;
    b[0]=2;
    for(y=4;y<=31622;y=y+2)a[y]=-1;
    for(y=3,x=1;y<=31622;y=y+2){
        if(a[y]==0)b[x++]=y;
        for(z=y+y;z<=31622;z=z+y)a[z]=-1;
    }
    ll p,q,i,m,n;
    while(scanf("%lld%lld",&p,&q)&&p!=0&&q!=0){
        y=0;
        for(i=0;b[i]*b[i]<=p;i++){
            if(p%b[i]==0){
                y=1;
                break;
            }
        }
        if(y==0)printf("no\n");
        else{
            ll r=1,B=q;
            m=p;
            while(p>0){
                if(p%2==1){
                    r=r*B;
                    r=r%m;
                }
                p=p/2;
                B=B*B;
                B=B%m;

            }
            if(r==q)printf("yes\n");
            else printf("no\n");
        }
    }
}






/*#include<stdio.h>
#include<math.h>
typedef long long ll;
ll a[31622];
ll b[3500];
int main()
{
    ll y,z,x;
    a[0]=-1;
    a[1]=-1;
    b[0]=2;
    for(y=4;y<=31622;y=y+2)a[y]=-1;
    for(y=3,x=1;y<=31622;y=y+2){
        if(a[y]==0)b[x++]=y;
        for(z=y+y;z<=31622;z=z+y)a[z]=-1;
    }
    ll p,q,i,j,m,n;
    while(scanf("%lld%lld",&p,&q)&&p!=0&&q!=0){
        y=0;
        for(i=0;b[i]*b[i]<=p;i++){
            if(p%b[i]==0){
                y=1;
                break;
            }
        }
        if(y==0)printf("no\n");
        else{
            n=q;
            m=1;
            for(i=0;i<p;i++){
                m*=n;
                m%=p;

            }
            if(m==q)printf("yes\n");
            else printf("no\n");
        }
    }
}

*/
