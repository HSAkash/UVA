#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int a,b,c;
    double p,sunflowers,roses,violets,r;
    double s,R;
    double pi = 2 * asin(1.0);
    while(cin>>a>>b>>c){
        p = a + b + c;
        s = p*1.0/2;
        violets = sqrt(s*(s-a)*(s-b)*(s-c)*1.0);
        r = 2*violets*1.0/p;
        R = (a*b*c)/ (4.0*violets);
        roses = pi*r*r;
        sunflowers = pi*R*R - violets;
        violets -= roses;
        printf("%.4f %.4f %.4f\n",sunflowers, violets, roses);
    }
}