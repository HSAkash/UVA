#include<stdio.h>
int main()
{
    int i,j,k,a[10],m,y,n,p,b,z,t=0;
    while(scanf("%d",&n)&&n!=0){
        if(t>0)printf("\n");
        z=0;
        for(i=1234;i<100000/n;i++){
            for(j=0;j<10;j++)a[j]=0;
            if(i<10000)a[0]=1;
            y=0;
            m=i;
            while(m>0){
                if(a[m%10]==1){
                    y=1;
                    break;
                }
                a[m%10]=1;
                m=m/10;
            }
            if(y==0){
               p=i*n;
               b=p;
               k=0;
               while(b>0){
                if(a[b%10]==1){
                    k=1;
                    break;
                }
                a[b%10]=1;
                b/=10;
               }
               if(k==0&&i<10000&&p>10000){
                    printf("%d / 0%d = %d\n",p,i,n);
                z=1;
               }
               else if(k==0&&i>10000&&p>i){
                printf("%d / %d = %d\n",p,i,n);
                z=1;
               }
            }
        }
        if(z==0)printf("There are no solutions for %d.\n",n);
        t=1;
    }
}


/*#include<stdio.h>
int main()
{
    int i,j,k,a[10],m,y,n,p,b,z,t=0;
    while(scanf("%d",&n)&&n!=0){
        if(t>0)printf("\n");
        z=0;
        for(i=1234;i<50000;i++){
            for(j=0;j<10;j++)a[j]=0;
            if(i<10000)a[0]=1;
            y=0;
            m=i;
            while(m>0){
                if(a[m%10]==1){
                    y=1;
                    break;
                }
                a[m%10]=1;
                m=m/10;
            }
            if(y==0){
               p=i*n;
               b=p;
               k=0;
               while(b>0){
                if(a[b%10]==1){
                    k=1;
                    break;
                }
                a[b%10]=1;
                b/=10;
               }
               if(k==0&&i<10000&&p>10000){
                    printf("%d / 0%d = %d\n",p,i,n);
                z=1;
               }
               else if(k==0&&i>10000&&p>i){
                printf("%d / %d = %d\n",p,i,n);
                z=1;
               }
            }
        }
        if(z==0)printf("There are no solutions for %d.\n",n);
        t=1;
    }
}
*/
