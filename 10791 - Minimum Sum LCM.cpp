#include<stdio.h>
#include<math.h>
#include<algorithm>
int prime(int n)
{
    if (n == 2) return 1;
    if(n==3)return 1;
    if(n==5)return 1;
    if(n%2 == 0 || n%3 == 0|| n%5 == 0||n == 1) return 0;
    int i,j;
    for ( i=7, j=0; i*i<=n; j++){
        if(n%i == 0) return 0;
        if (j%2 == 0) i += 4;
        else i += 2;
    }
    return 1;
}
using namespace std;
int main()
{
    int n,i,j,k,c,count,q,m,q2,t=1;
    double s,s2;
    while(scanf("%d",&n)!=EOF&&n>0){
        k=n;
        if(n==2147483647)printf("Case %d: 2147483648\n",t);
        else if(n==1||(m=prime(n)==1))printf("Case %d: %d\n",t,n+1);
        else{
            s2=1;
            if(n%2==0)s2=sqrt(n/2);
            q2=s2;
            if(q2==s2&&q2%2==0&&n%9>0)printf("Case %d: %d\n",t,n+1);
            else{
                count=0;
                for(i=2;i*i<n;i++){
                    c=1;
                    while(n%i==0){
                        c=c*i;
                        n=n/i;
                    }
                    if(c>1)count+=c;
                }
                if(n>1)count=count+n;
                if(k==count)count+=1;
                printf("Case %d: %d\n",t,count);
            }
        }
    t++;
    }
}



/*#include<stdio.h>
#include<algorithm>
#include<math.h>
using namespace std;
typedef long long ll;
ll a[1000000];
ll b[1000000];
int main()
{
    ll n,t=1;
    ll count,c,d,i,j,k,f,q;
    double s;
    while(scanf("%lld",&n)&&n>0){
        if(n==1)printf("Case %lld: 2\n",t);
        else{
            c=n;
        a[0]=1;
        count=1;
        while(n%2==0){
            a[count]=a[count-1]*2;
            n=n/2;
            count++;
        }
        for(i=3;i*i<=n;i=i+2){
            k=1;
            while(n%i==0){
                a[count]=k*i;
                n=n/i;
                k=a[count];
                count++;
            }
        }
        if(n>1){
            a[count]=n;
            count++;
        }
        if(n<c){
            a[count]=c;
            count++;
        }


        for(i=0;i<count;i++){
            for(j=i+1;j<count;j++){
                d=a[i]*a[j];
                if(d==c){
                    if(i==0)f=a[i]+a[j];
                    else if((a[i]+a[j])<f)f=a[i]+a[j];
                }
            }
        }
        printf("Case %lld: %lld\n",t,f);
        }
        t++;
    }
}

*/
/*#include<stdio.h>
#include<algorithm>
#include<math.h>
using namespace std;
typedef long long ll;
ll a[1000000];
ll b[1000000];
int main()
{
    ll n,t=1;
    ll count,c,d,i,j,k,f,q;
    double s;
    while(scanf("%lld",&n)&&n>0){
        if(n==1)printf("Case %lld: 2\n",t);
        else{
            c=n;
        a[0]=1;
        count=1;
        while(n%2==0){
            a[count]=a[count-1]*2;
            n=n/2;
            count++;
        }
        for(i=3;i*i<=n;i=i+2){
            k=1;
            while(n%i==0){
                a[count]=k*i;
                n=n/i;
                k=a[count];
                count++;
            }
        }
        if(n>1){
            a[count]=n;
            count++;
        }
        for(i=1,k=0;i<count-2;i++){
            for(j=i+1;j<count-1;j++){
                d=a[i]*a[j];
                if(d<c&&c%d==0){
                    b[k]=d;
                    k++;
                }
            }
        }
        for(i=0;i<k;i++,count++)a[count]=b[i];
        if(n<c){
            a[count]=c;
            count++;
        }
        for(i=0;i<count;i++){
            for(j=i+1;j<count;j++){
                d=a[i]*a[j];
                if(d==c){
                    if(i==0)f=a[i]+a[j];
                    else if((a[i]+a[j])<f)f=a[i]+a[j];
                }
            }
        }
        printf("Case %lld: %lld\n",t,f);
        }
        t++;
    }
}*/
/*
#include<stdio.h>
#include<algorithm>
#include<math.h>
using namespace std;
typedef long long ll;
ll a[1000000];
ll b[1000000];
int main()
{
    ll n,t=1;
    ll count,c,d,i,j,k,f,q;
    double s;
    while(scanf("%lld",&n)&&n>0){
        if(n==1)printf("Case %lld: 2\n",t);
        else{
            c=n;
        a[0]=1;
        count=1;
        while(n%2==0){
            a[count]=a[count-1]*2;
            n=n/2;
            count++;
        }
        for(i=3;i*i<=n;i=i+2){
            k=1;
            while(n%i==0){
                a[count]=k*i;
                n=n/i;
                k=a[count];
                count++;
            }
        }
        if(n>1){
            a[count]=n;
            count++;
        }

        //for(i=0;i<count;i++)printf("%lld ",a[i]);
        //printf("\n");
        for(i=1,k=0;i<count;i++){
            for(j=i+1;j<count;j++){
                d=a[i]*a[j];
                if(d<c&&c%d==0){
                    b[k]=d;
                    k++;
                }
            }
        }
        //for(i=0;i<k;i++)printf("%lld ",b[i]);
        //printf("\n");
        for(i=0;i<k;i++,count++)a[count]=b[i];
        if(n<c){
            a[count]=c;
            count++;
        }
        //for(i=0;i<count;i++)printf("%lld ",a[i]);
        //printf("\n");
        //sort(a,a+count);
        //for(i=0;i<count;i++)printf("%lld ",a[i]);
        //printf("\n");
        for(i=0;i<count;i++){
            for(j=i+1;j<count;j++){
                d=a[i]*a[j];
                if(d==c){
                    if(i==0)f=a[i]+a[j];
                    else if((a[i]+a[j])<f)f=a[i]+a[j];
                }
            }
        }
        printf("Case %lld: %lld\n",t,f);
        }
        t++;
    }
}
*/


/*#include<bits/stdc++.h>
using namespace std;
#define N '\n'
#define SP ' '
typedef long long ll;
ll a[100000];
ll b=0;
void printDivisors(ll n)
{
     ll j=0,i;
    for (i=1; i<=sqrt(n); i++)
    {
        if (n%i == 0)
        {

            if (n/i == i)
                a[j++]=i;

            else
               {
                  a[j++]=i;a[j++]=n/i;
               }
        }
    }
    b=j;
    sort(a,a+j);
}
int main()
{
    ll n;
    while(cin>>n&&n!=0)
    {

    }
}*/
