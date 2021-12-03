#include <stdio.h>
long long int a[100000],b[100000];
long long int power_number(long long int x)
{
    long long int rem,sum;
    sum = 0;
    while(x!=0){
        rem = x%10;
        sum = sum + (rem*rem);
        x = x/10;
    }
    return sum;
}

int main()
{
    long long int num,i,n,T,s=0,j,k,n2[10000],l,u;
    a[1]=1;
    b[1]=1;
    for(num=2;num<100000;num++){
        n = num;
        k = 0;
        for(i=0;;i++){
            n2[i] = n;
            n = power_number(n);
            if(n==1){
                a[num]=1;
                b[num]=i+2;
                break;
            }
            for(j=0;j<=i;j++){
                if(n==n2[j]){
                k = 1;
                break;
                }
            }
            if(k==1) break;
        }
    }
    while(scanf("%lld %lld",&l,&u)!=EOF){
        if(s>0)printf("\n");
        for(i=l;i<=u;i++){
            if(a[i]==1)printf("%lld %lld\n",i,b[i]);
        }
        s=1;
    }
    return 0;
}
