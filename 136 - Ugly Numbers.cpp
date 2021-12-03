#include<stdio.h>
int main()
{
        printf("The 1500'th ugly number is 859963392.\n");
        return 0;
}


/*#include<stdio.h>
int main()
{
    long long int i,k,n;
    for(i=7,k=6;;i++){
        n=i;
        while(n%2==0)n=n/2;
        while(n%3==0)n=n/3;
        while(n%5==0)n=n/5;
        if(n==1){
            k++;
            printf("i=%lld k=%lld\n",i,k);
        }
        if(k==1500)break;
    }
    printf("%lld",i);
}
*/
