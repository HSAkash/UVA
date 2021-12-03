#include<stdio.h>
int lp(int y)
{
    if(y%400==0)return 1;
    if(y%100==0)return 0;
    if(y%4==0)return 1;
    return 0;
}
int main()
{
    int d,m,y,qy,t;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d%d%d",&d,&m,&y,&qy);
        int c,c2,y1=0,y2=0;
        c=(y/4)-(y/100)+(y/400);
        c2=(qy/4)-(qy/100)+(qy/400);
        y1=lp(y);
        y2=lp(qy);

    }
}
