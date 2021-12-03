#include<stdio.h>
typedef long long ll;
int main()
{
    ll n,a=1;
    while(scanf("%lld",&n)!=EOF){
        if(a>999){}
        else if(a>99&&a<1000)printf(" ");
        else if(a>9&&a<100)printf("  ");
        else if(a>0&&a<10)printf("   ");
        printf("%lld.",a++);
        if(n>0){
        if(n/10000000>0){
            if(n/100000000000000>0){
                printf(" %lld kuti",n/100000000000000);
                n=n%100000000000000;
            }
            if(n/1000000000000>0){
                printf(" %lld lakh",n/1000000000000);
            }
            n=n%1000000000000;
            if(n/10000000000>0){
                printf(" %lld hajar",n/10000000000);
            }
            n=n%10000000000;
            if(n/1000000000>0){
                printf(" %lld shata",n/1000000000);
            }
            n=n%1000000000;
            if(n/10000000>0){
                printf(" %lld",n/10000000);
            }
            n=n%10000000;
            printf(" kuti");
        }
        if(n/100000>0){
            printf(" %lld lakh",n/100000);
        }
        n=n%100000;
        if(n/1000>0){
            printf(" %lld hajar",n/1000);
        }
        n=n%1000;
        if(n/100>0)printf(" %lld shata",n/100);
        n=n%100;
        if(n>0)printf(" %lld",n);
        }
        else printf(" 0");
        printf("\n");

    }
    return 0;
}

/*#include<stdio.h>
typedef long long ll;
ll kuti2(ll n);
ll kuti(ll n);
ll lakh(ll n);
ll hajar(ll n);
ll shata(ll n);
ll decimal(ll n);
int main()
{
    ll n,a=1;
    while(scanf("%lld",&n)!=EOF){
        if(a>99&&a<1000)printf(" ");
        else if(a>0&&a<10)printf("   ");
        else if(a>9&&a<100)printf("  ");
        printf("%lld. ",a);
        a++;
        if(n/10000000>0){
            kuti(n/10000000);
            n=n%10000000;
        }
        if(n/100000>0){
            lakh(n/100000);
            n=n%100000;
        }
        if(n/1000>0){
            hajar(n/1000);
            n=n%1000;
        }
        if(n/100>0){
            shata(n/100);
            n=n%100;
        }
        if(n>0)decimal(n);
        printf("\n");
    }
}
ll kuti2(ll n)
{
    printf("%lld kuti ",n);
}
ll kuti(ll n)
{
    if(n/10000000>0){
            kuti2(n/10000000);
            n=n%10000000;
        }
        if(n/100000>0){
            lakh(n/100000);
            n=n%100000;
        }
        if(n/1000>0){
            hajar(n/1000);
            n=n%1000;
        }
        if(n/100>0){
            shata(n/100);
            n=n%100;
        }
        if(n>0)decimal(n);
    printf("kuti ");
}
ll lakh(ll n)
{
    if(n%100000>999)hajar(n%100000);
    else if(n%1000>99)shata(n%1000);
    else if(n%100>0)decimal(n%100);
    printf("lakh ");
}
ll hajar(ll n)
{
    if(n%1000>99)shata(n%1000);
    else if(n%100>0)decimal(n%100);
    printf("hajar ");
}
ll shata(ll n)
{
    if(n%100>0)decimal(n%100);
    printf("shata ");
}
ll decimal(ll n)
{
    printf("%lld ",n);
}*/
