#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int c,n,i,j,sum,t;
    double avg,avg2;
    cin>>c;
    while(c--){
        cin>>n;
        int a[n];
        sum=0;
        for(i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        avg=(sum*1.00)/n;
        avg2=0.00;
        for(i=0;i<n;i++){
            if(a[i]>avg)avg2+=100;
        }
        avg2=avg2/n;
        printf("%.03lf%\n",avg2);
    }
}
