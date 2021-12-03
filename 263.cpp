#include<stdio.h>
#include<math.h>
#include<string.h>
#include<algorithm>
using namespace std;
int descending(int n[10],int j)
{
    int b=0,i;
    for(i=j-1;i>=0;i--){
        b=b*10+n[i];
    }
    return b;
}
int ascending(int n[10],int j)
{
    int b=0,i;
    for(i=0;i<j;i++){
        b=b*10+n[i];
    }
    return b;
}

int main()
{
    int n,a[10],i,j,m,z,h,l,p;
    while(scanf("%d",&n)!=EOF){
        if(n==0)return 0;
        printf("Original number was %d\n",n);
        z=0;
        int b[1000];
        for( ; ; ){
            m=n;
            j=0;
            while(m>0){
                a[j]=m%10;
                m=m/10;
                j++;
            }
            sort(a,a+j);
            h=descending(a,j);
            l=ascending(a,j);
            n=h-l;
            printf("%d - %d = %d\n",h,l,n);
            b[z]=n;
            p=0;
            for(i=0;i<z;i++){
                if(b[z]==b[i]){
                    p=1;
                    break;
                }
            }
            z++;
            if(p==1)break;
        }
        printf("Chain length %d\n\n",z);
    }
    return 0;
}
