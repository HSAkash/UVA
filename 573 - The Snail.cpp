#include<stdio.h>
int main()
{
    int count;
    double h,u,d,f,f2,u2;
    while(scanf("%lf%lf%lf%lf",&h,&u,&d,&f)&&h!=0){
        count=0;
        f2=u*f/100.00;
        double i=0.00;
        while(1){
            count++;
            if(u>0)i+=u;
            u-=f2;
            if(i>h){
                printf("success on day %d\n",count);
                break;
            }
            i-=d;
            if(i<0){
                printf("failure on day %d\n",count);
                break;
            }

        }
    }
}
