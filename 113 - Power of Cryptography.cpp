#include<stdio.h>
#include<math.h>
int main()
{
    double p,b;
    while(scanf("%lf%lf",&p,&b)!=EOF){
        printf("%0.00lf\n",pow(b,1.0/p));
    }
}
