///////////
/*#include<stdio.h>
#include<math.h>
int main()
{
    double x1,x2,x3,y1,y2,y3;
    double c1,c2,c3,d1,d2,d3,a1,a2,b1,b2,k1,k2,g,f,c,e,r;
    while(scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3)!=EOF){
        a1=x1-x2;
        b1=y1-y2;
        a2=x1-x3;
        b2=y1-y3;
        c1=x1*x1;
        c2=x2*x2;
        c3=x3*x3;
        d1=y1*y1;
        d2=y2*y2;
        d3=y3*y3;
        k1=-((c1-c2+d1-d2)/2);
        k2=-((c1-c3+d1-d3)/2);
        e=b1/b2;
        g=(k1-(e*k2))/(a1-(e*a2));
        f=(k1-(a1*g))/b1;
        c=-(c1+d1+(2*g*x1)+(2*f*y1));
        r=(g*g)+(f*f)-c;
        r=sqrt(r);
        if(g>0)printf("(x + %.03lf)^2",g);
        else if(g<0)printf("(x - %.03lf)^2",-g);
        else printf("x^2");
        printf(" + ");
        if(f>0)printf("(y + %.03lf)^2",f);
        else if(f<0)printf("(y - %.03lf)^2",-f);
        else printf("y^2");
        printf(" = ");
        if(r>0)printf("%.03lf^2",r);
        else printf("0");
        printf("\n");
        printf("x^2 + y^2 ");
        if(g>0)printf("+ %.03lfx ",2*g);
        else if(g<0)printf("- %.03lfx ",-2*g);
        if(f>0)printf("+ %.03lfy ",2*f);
        else if(f<0)printf("- %.03lfy ",-2*f);
        if(c>0)printf("+ %.03lf ",c);
        else if(c<0)printf("- %.03lf ",-c);
        printf("= 0\n\n");
    }
}*/
///////////////
#include<stdio.h>
#include<math.h>
int main()
{
    double x1,x2,x3,y1,y2,y3;
    double k,g,f,c,r;
    while(scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3)!=EOF){
        k=(((x3-x1)*(x3-x2))+((y3-y1)*(y3-y2)))/(((x3-x2)*(y1-y2))-((y3-y1)*(x1-x2)));
        g=((k*y2)-(k*y1)-x1-x2)/2;
        f=((k*x1)-(k*x2)-y1-y2)/2;
        c=(x1*x2)+(y1*y2)-(k*x1*y2)+(k*x2*y1);
        r=(g*g)+(f*f)-c;
        r=sqrt(r);
        if(g>0)printf("(x + %.03lf)^2",g);
        else if(g<0)printf("(x - %.03lf)^2",-g);
        else printf("x^2");
        printf(" + ");
        if(f>0)printf("(y + %.03lf)^2",f);
        else if(f<0)printf("(y - %.03lf)^2",-f);
        else printf("y^2");
        printf(" = ");
        if(r>0)printf("%.03lf^2",r);
        else printf("0");
        printf("\n");
        printf("x^2 + y^2 ");
        if(g>0)printf("+ %.03lfx ",2*g);
        else if(g<0)printf("- %.03lfx ",-2*g);
        if(f>0)printf("+ %.03lfy ",2*f);
        else if(f<0)printf("- %.03lfy ",-2*f);
        if(c>0)printf("+ %.03lf ",c);
        else if(c<0)printf("- %.03lf ",-c);
        printf("= 0\n\n");
    }
}
//////////////
/*
#include<stdio.h>
#include<math.h>
int main()
{
    double x1,x2,x3,y1,y2,y3;
    double g,f,r,c,a1,a2,b1,b2,c1,c2;
    while(scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3)!=EOF){
        a1=(x1+x2)/2;
        a2=(x2+x3)/2;
        b1=(y1+y2)/2;
        b2=(y2+y3)/2;
        c1=-((x2-x1)/(y2-y1));
        c2=-((x3-x2)/(y3-y2));
        g=(b2-b1+(a1*c2)-(a2*c2))/(c1-c2);
        f=c1*(g-a1)+b1;
        r=((x1-g)*(x1-g))+((y1-f)*(y1-f));
        c=g*g+f*f-r;
        r=sqrt(r);
        if(g>0)printf("(x + %.03lf)^2",g);
        else if(g<0)printf("(x - %.03lf)^2",-g);
        else printf("x^2");
        printf(" + ");
        if(f>0)printf("(y + %.03lf)^2",f);
        else if(f<0)printf("(y - %.03lf)^2",-f);
        else printf("y^2");
        printf(" = ");
        if(r>0)printf("%.03lf^2",r);
        else printf("0");
        printf("\n");
        printf("x^2 + y^2 ");
        if(g>0)printf("+ %.03lfx ",2*g);
        else if(g<0)printf("- %.03lfx ",-2*g);
        if(f>0)printf("+ %.03lfy ",2*f);
        else if(f<0)printf("- %.03lfy ",-2*f);
        if(c>0)printf("+ %.03lf ",c);
        else if(c<0)printf("- %.03lf ",-c);
        printf("= 0\n\n");
    }
}

*/
