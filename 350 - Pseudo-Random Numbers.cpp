#include<stdio.h>
int a[100000];

int main()
{
    int z,i,m,l,j=1,k,count,x,y;
    while(scanf("%d%d%d%d",&z,&i,&m,&l)&&(z>0&&i>0&&m>0&&l>0)){
        count=0;

        for(x=0;;x++){
            a[x]=l;
            l=((z*l)+i)%m;

            y=0;
            for(k=0;k<x;k++){
                if(a[x]==a[k]){
                    y=1;
                    break;
                }
            }

            if(y==1){
                if(a[0]!=a[x])x=x-1;
                break;
            }
        }

        printf("Case %d: %d\n",j,x);
        j++;
    }
}



/*#include<stdio.h>
int a[100000];

int test(int a[],int k)
{
    int i;
    for(i=0;i<k-1;i++){
        if(a[i]==a[k-1])return 0;
    }
    return 1;
}


int main()
{
    int z,i,m,l,j=1,k,count;
    while(scanf("%d%d%d%d",&z,&i,&m,&l)&&(z>0&&i>0&&m>0&&l>0)){
        a[0]=l;
        k=1;
        count=0;

        do{
           l=((z*l)+i)%m;
           //printf("l=%d\n",l);
           count++;
           a[k]=l;
           k++;
        }while(test(a,k)==1);

        printf("Case %d: %d\n",j,count);
        j++;
    }
}*/
