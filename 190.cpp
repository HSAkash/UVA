#include<stdio.h>
#include<math.h>
int main()
{
    double x1,x2,x3,y1,y2,y3;
    double g,f,r,c,a1,a2,b1,b2,c1,c2;
    while(scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3)!=EOF){
        a1=2*(x2-x1);
        a2=2*(x3-x1);
        b1=2*(y2-y1);
        b2=2*(y3-y1);
        c1=x2*x2+y2*y2-x1*x1-y1*y1;
        c2=x3*x3+y3*y3-x1*x1-y1*y1;
        g=((b2*c1)-(b1*c2))/((a1*b2)-(a2*b1));
        f=(c1-(g*a1))/b1;
        r=(x1-g)*(x1-g)+(y1-f)*(y1-f);
        c=g*g+f*f-r;
        r=sqrt(r);
        if(g>0)printf("(x - %.03lf)^2",g);
        else if(g<0)printf("(x + %.03lf)^2",-g);
        else printf("x^2");
        printf(" + ");
        if(f>0)printf("(y - %.03lf)^2",f);
        else if(f<0)printf("(y + %.03lf)^2",-f);
        else printf("y^2");
        printf(" = ");
        if(r>0)printf("%.03lf^2",r);
        else printf("0");
        printf("\n");
        printf("x^2 + y^2 ");
        if(g>0)printf("- %.03lfx ",2*g);
        else if(g<0)printf("+ %.03lfx ",-2*g);
        if(f>0)printf("- %.03lfy ",2*f);
        else if(f<0)printf("+ %.03lfy ",-2*f);
        if(c>0)printf("+ %.03lf ",c);
        else if(c<0)printf("- %.03lf ",-c);
        printf("= 0\n\n");
    }
}
