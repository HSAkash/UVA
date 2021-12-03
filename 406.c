#include<stdio.h>
#include<string.h>
int a[1000000];
int m[1000000];
int main()
{
    int i,j;
    memset(a,-1,sizeof(a));
    a[0]=0;
    a[1]=1;
    a[2]=1;
    for(i=4;i<=1000000;i=i+2)a[i]=0;
    for(i=3;i<=1000000;i=i+2){
        if(a[i]==-1)a[i]=1;
        for(j=i+i;j<=1000000;j=j+i)a[j]=0;
    }
    a[1]=1;
    int b,z;
    while(scanf("%d%d",&b,&z)!=EOF){
        printf("%d %d:",b,z);
        int c=0;
        if(b==1){
            m[0]=1;
            c=1;
        }
        if(b==2){
            m[1]=2;
            c=2;
        }
        if(b>2){
            m[0]=1;
            m[1]=2;
            c=2;
        }
        for(i=3;i<=b;i+=2){
            if(a[i]==1){
                m[c]=i;
                c++;
            }
        }
        int p,q;
        if(c%2==0){
            p=(c/2)-z;
            if(p<0)p=0;
            for(i=p,j=0;i<c;i++,j++){
                printf(" %d",m[i]);
                if(j>=(2*z)-1)break;
            }
        }

        if(c%2==1){
            q=((c+1)/2)-z;
            if(q<0)q=0;
            for(i=q,j=0;i<c;i++,j++){
                printf(" %d",m[i]);
                if(j>=(2*z)-2)break;
            }
        }


    printf("\n\n");
    }
    return 0;
}


