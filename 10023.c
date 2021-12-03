#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char s[1002];
    int a[1001],c[1001],d[1001],i,j,k,l,m,n,e,f,g,h,x,y,z,t[1001],u[1001];
    scanf("%s",s);
    for(i=0;s[i];i++)a[i]=s[i]-'0';
    l=i;
    int b[l/2];
    //for(i=0;i,i<l;i++)printf("%d ",a[i]);
    for(i=0;i<=(l-1)/2;i++){
        if(i==0){
            if(l%2==0){
                b[0]=sqrt((a[0]*10)+a[1]);
            }
            else b[0]=sqrt(a[0]);
            if(b[0]<3){
                if(b[0]==1)t[0]=1;
                else if(b[0]==2)t[0]=4;
                else if(b[0]==3)t[0]=9;
                u[0]=a[0]-t[0];//
            }
            else{
                if(b[0]==4){
                    t[0]=1;
                    t[1]=6;
                }
                else if(b[0]==5){
                    t[0]=2;
                    t[1]=5;
                }
                else if(b[0]==6){
                    t[0]=3;
                    t[1]=6;
                }
                else if(b[0]==7){
                    t[0]=4;
                    t[1]=9;
                }
                else if(b[0]==8){
                    t[0]=6;
                    t[1]=4;
                }
                else if(b[0]==9){
                    t[0]=8;
                    t[1]=1;
                }
            }
        }
        else{




           e=0;
           k=0;
           for(j=i-1;j>=0;j--){
                n=b[j]*2;
                c[k]=(n%10)+e;
                printf("c[%d]=%d\n",k,c[k]);
                k++;
                e=n/10;
                if(j==0&&e>0){
                    c[k]=e;
                    printf("2 c[%d]=%d\n",k,c[k]);
                    k++;
                }
           }
           int tamp;
           for(j=0;j<k/2;j++){
            tamp=c[j];
            c[j]=c[k-j-1];
            c[k-j-1]=tamp;
           }
           for(m=9;m>=0;m--){
            c[k]=m;
            e=0;//
            g=0;//
            for(f=k;f>=0;f--){
                n=c[f]*m;
                d[g]=(n%10)+e;
                //printf("d[%d]=%d\n",g,d[g]);
                g++;
                e=n/10;
                if(f==0&&e>0){
                    d[g]=e;
                    //printf("2 d[%d]=%d\n",g,d[g]);
                    g++;
                }

           }
           if(g<h){
                b[i]=m;
                break;
           }
           else{
                y=0;
                for(x=0;x<g;x++){
                    if(d[g-x-1]>u[x]){
                        y=1;
                        break;
                    }
                }
                if(y==0)b[i]=m;
           }
            //printf("\n");//

           }
        }
    }
    for(i=0;i,i<=(l-1)/2;i++)printf("%d ",b[i]);
}
