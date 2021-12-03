#include<stdio.h>
typedef long long ll;
ll i,j,k,l,m,n,a,b,c,d,p,q,r,t,a2[150],z;
double c2;
int main()
{
    while(scanf("%lld%lld%lld",&t,&a,&b)!=EOF){
        if(t==1)printf("(%lld^%lld-1)/(%lld^%lld-1) is not an integer with less than 100 digits.\n",t,a,t,b);
        else if(a==b||t==0)printf("(%lld^%lld-1)/(%lld^%lld-1) 1\n",t,a,t,b);
        else{
            c2=(a*1.0)/b;
            c=c2;
            if(c!=c2)printf("(%lld^%lld-1)/(%lld^%lld-1) is not an integer with less than 100 digits.\n",t,a,t,b);
            else{
                a2[0]=1;
                z=1;
                m=0;
                for(i=1;i<c;i++){

                    for(j=0;j<b;j++){
                        r=0;
                        for(l=0;l<z;l++){
                            n=a2[l]*t+r;
                            a2[l]=n%10;
                            r=n/10;
                        }
                        while(r>0){
                            a2[z++]=r%10;
                            r=r/10;
                        }
                        if(z>100){
                            m=1;
                            break;
                        }
                    }
                    if(m==1)break;
                    p=1;
                    for(j=0;j<z;j++){
                        q=a2[j]+p;
                        a2[j]=q%10;
                        p=q/10;
                    }
                    if(p>0)a2[z++]=p;
                    if(z>100){
                        m=1;
                        break;
                    }
                }
                if(m==1)printf("(%lld^%lld-1)/(%lld^%lld-1) is not an integer with less than 100 digits.\n",t,a,t,b);
                else {
                    printf("(%lld^%lld-1)/(%lld^%lld-1) ",t,a,t,b);
                    for(j=z-1;j>=0;j--)printf("%d",a2[j]);
                    printf("\n");
                }
            }
        }
    }
}
