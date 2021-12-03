



#include<stdio.h>
typedef long long ll;
int cheak(ll m,ll i)
{
    while(i>1){
        if(m%i==0)return 0;
        i--;
    }
    return 1;
}

int main()
{
    ll n,m,i,j,k,m2;
    while(scanf("%lld%lld",&n,&m)!=EOF){
        if(n>m)printf("%lld divides %lld!\n",m,n);
        else if(n==0){
            if(m==1||m==0)printf("%lld divides %lld!\n",m,n);
            else if(m>1)printf("%lld does not divide %lld!\n",m,n);
        }
        else if(m==0||m==n)printf("%lld divides %lld!\n",m,n);
        else{
            m2=m;
            for(i=0;i<n/2;i++){
                if(m%2!=0)break;
                m=m/2;
            }
            for(i=3;i*i<=m2;i+=2){
                    //printf("%d\n",n/i);
                    for(k=0;k<n/i;k++){
                        if(m%i!=0)break;
                        m=m/i;
                        printf("m=%d\n",m);
                    }
                    //printf("k=%d\n",k);
                    if(m<n)break;
            }
            //printf("i=%d m=%d\n",i,m);
            //if(i==m||(m<i&&m>1)||(i<m&&cheak(m,i)==0))printf("%lld does not divide %lld!\n",m2,n);
            if(m<n)printf("%lld divides %lld!\n",m2,n);
            else printf("%lld does not divide %lld!\n",m2,n);
        }
    }
}


/*#include<stdio.h>
typedef long long ll;

int main()
{
    ll n,m,i,j,k,m2;
    while(scanf("%lld%lld",&n,&m)!=EOF){
        if(n>m)printf("%lld divides %lld!\n",m,n);
        else if(n==0){
            if(m==1||m==0)printf("%lld divides %lld!\n",m,n);
            else if(m>1)printf("%lld does not divide %lld!\n",m,n);
        }
        else if(m==0||m==n)printf("%lld divides %lld!\n",m,n);
        else{
            m2=m;
            for(i=2;i*i<=m2;i++){
                    for(k=0;k<n/i;k++){
                        if(m%i!=0)break;
                        m=m/i;
                    }
                    if(m<n)break;
            }
            if(m<n)printf("%lld divides %lld!\n",m2,n);
            else printf("%lld does not divide %lld!\n",m2,n);
        }
    }
}
*/
/*#include<stdio.h>
typedef long long ll;

int main()
{
    ll n,m,i,j,k,m2;
    while(scanf("%lld%lld",&n,&m)!=EOF){
        if(n>m)printf("%lld divides %lld!\n",m,n);
        else if(n==0){
            if(m==1||m==0)printf("%lld divides %lld!\n",m,n);
            else if(m>1)printf("%lld does not divide %lld!\n",m,n);
        }
        else if(m==0)printf("%lld divides %lld!\n",m,n);
        else{
            m2=m;
            for(k=0;k<n/2;k++){
                if(m%2==1)break;
                m=m/2;
            }
            for(i=3;i<=n;i+=2){
                    for(k=0;k<n/i;k++){
                        if(m%i!=0)break;
                        m=m/i;
                    }
                    if(m==1)break;
            }
            if(m==1)printf("%lld divides %lld!\n",m2,n);
            else printf("%lld does not divide %lld!\n",m2,n);
        }
    }
}
*/
/*
#include<stdio.h>
typedef long long ll;

int main()
{
    ll n,m,i,j,k,m2;
    while(scanf("%lld%lld",&n,&m)!=EOF){
        if(n>m)printf("%lld divides %lld!\n",m,n);
        else if(n==0){
            if(m==1||m==0)printf("%lld divides %lld!\n",m,n);
            else if(m>1)printf("%lld does not divide %lld!\n",m,n);
        }
        else if(m==0||m==n)printf("%lld divides %lld!\n",m,n);
        else{
            m2=m;
            for(i=2;i*i<=m;i++){
                    for(k=0;k<n/i;k++){
                        if(m%i!=0)break;
                        m=m/i;
                    }
                    if(m==1||m<n)break;
            }
            if(m==1||m<n)printf("%lld divides %lld!\n",m2,n);
            else printf("%lld does not divide %lld!\n",m2,n);
        }
    }
}*/
