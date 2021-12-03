#include<stdio.h>
#include<iostream>
#include<string.h>
#define N '\n'
using namespace std;
int main()
{
    int h,m,n;
    char ch;
    double clock,h2,m2,h3,m3,clock2;
    while(1==1){
        n=0;
        while(scanf("%c",&ch)){
            if(ch==N)break;
            if(ch==':'){
            h=n;
            n=0;
            }
            else n=n*10+(ch-'0');
        }
        m=n;
        if(h==0&&m==0)return 0;
        h2=(30.00*h)+((m/60.00)*30.00);
        m2=(m*6.00);
        if(h2>m2){
            m3=m2+360;
            clock=h2-m2;
            clock2=m3-h2;
            if(clock<0)clock=-clock;
            if(clock2<0)clock2=-clock2;
            if(clock2>clock)printf("%.03lf\n",clock);
            else printf("%.03lf\n",clock2);
        }
        else{
            h3=h2+360;
            clock=h2-m2;
            clock2=h3-m2;
            if(clock<0)clock=-clock;
            if(clock2<0)clock2=-clock2;
            if(clock2>clock)printf("%.03lf\n",clock);
            else printf("%.03lf\n",clock2);
        }

    }
}
