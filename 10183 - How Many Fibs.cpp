#include<stdio.h>
int main()
{
    int n,i,a[1000],k,d,c,p[1000],b[1000],j,L[101],U[101],t,x,y,z,l,count,m;
    char s[210];
    while(fgets(s,205,stdin)){
        for(i=0;s[i]!=' ';i++)L[i]=s[i]-'0';
        l=i;
        for(i=i+1,t=0;s[i];i++)U[t++]=s[i]-'0';
        t=t-1;
        if(L[0]==0&&U[0]==0)return 0;


        count=0;
       for(i=0;i<1000;i++)a[i]=b[i]=p[i]=0;
        a[0]=1;
        b[0]=1;
        k=1;
        y=0;
        for(i=3;i<=500;i++){
            d=0;
            for(j=0;j<k;j++)p[j]=a[j];
            for(j=0;j<k;j++){
                c=b[j]+d+a[j];
                a[j]=c%10;
                d=c/10;
            }
            while(d>0){
                a[k++]=d%10;
                d/=10;
            }
            for(j=0;j<k;j++)b[j]=p[j];


            if(y==0){
                if(k>l)y=1;
                if(k==l){

                    for(j=0,m=k-1;j<k;j++,m--){
                        if(L[j]<a[m]){
                            y=1;
                            break;
                        }
                        if(L[j]>a[m])break;
                    }
                    if(j==k)y=1;
                }
            }
            if(k>t)break;

            z=0;
            if(k==t){

                for(j=0,m=k-1;j<k;j++,m--){
                    if(U[j]>a[m])break;
                    if(U[j]<a[m]){
                        z=1;
                        break;
                    }
                }
            }
            if(z==1)break;
            if(y==1)count++;


        }
        if((L[0]==0||L[0]==1)&&l==1)count++;
        printf("%d\n",count);
    }
}
