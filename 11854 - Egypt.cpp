#include<iostream>
using namespace std;
int main()
{
    int a,b,c,sum1,sum2,c2;
    while((cin>>a>>b>>c)&&(a!=0&&b!=0&&c!=0)){
        sum1=(a*a)+(b*b);
        sum2=(a*a)-(b*b);
        c2=c*c;
        if(sum2<0)sum2=-sum2;
        if(sum1==c2||sum2==c2)cout<<"right"<<endl;
        else cout<<"wrong"<<endl;
    }
}
