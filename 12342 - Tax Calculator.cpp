#include<stdio.h>
typedef long long ll;
int main()
{
    int c,i;
    ll tax,money;
    scanf("%d",&c);
    for(i=1;i<=c;i++){
        scanf("%lld",&money);
        tax=0;
        if(money>180000){
            if(money>200000){
                money-=180000;
                if(money>300000){
                    tax+=300000/10;
                    money-=300000;
                }
                else if(money>0){
                    tax+=money/10;
                    money=0;
                }
                if(money>400000){
                    tax+=(400000*15)/100;
                    money-=400000;
                }
                else if(money>0){
                    tax+=(money*15)/100;
                    money=0;
                }
                if(money>300000){
                    tax+=300000/5;
                    money-=300000;
                }
                else if(money>0){
                    tax+=money/5;
                    money=0;
                }
                if(money>0)tax+=money/4;
            }
            else tax=2000;
        }
        printf("Case %d: %lld\n",i,tax);
    }
}
