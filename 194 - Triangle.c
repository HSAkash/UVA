#include<stdio.h>
#include<math.h>
void abC(double a,double b,double c,double A,double B,double C)
{

}



void abA(double a,double b,double c,double A,double B,double C)
{

}


void abc(double a,double b,double c,double A,double B,double C)
{

}



void aBC(double a,double b,double c,double A,double B,double C)
{
    if(A<0)A=180.00-B-C;
    else if(B<0)B=180.00-A-C;
    else C=180.00-A-B;
    if(a>0){
        b=(a*sin(B))/sin(A);
        c=(a*sin(C)/sin(A));
    }
    else if(b>0){
        a=(b*sin(A))/sin(B);
        c=(b*sin(C)/sin(B));
    }
    else{
        b=(c*sin(B))/sin(C);
        a=(c*sin(A)/sin(C));
    }
    printf("")
}



int main()
{

}
