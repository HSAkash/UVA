#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;
int main()
{
    int t,x,y,r;
    double z;
    while(cin>>t){
        while(t--){
            cin>>x>>y>>r;
            z=sqrt((x*x)+(y*y));
            printf("%.02lf %.02lf\n",r-z,r+z);
        }
    }
}
