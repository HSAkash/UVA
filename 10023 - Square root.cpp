#include<stdio.h>
#include<string.h>
#include<math.h>


int main()
{
    int i,j,k,l,m,n,c,d,e,f,g,h,r;

    char s[10010];
    int a[10010],b[10010],a2[10010],b2[10010];

    while(scanf("%d",&n)!=EOF){

        while(n--){

            scanf("%s",s);
            for(i=0;s[i];i++)a[i]=s[i]-'0';
            l=i;
            k=0;
            c=0;
            if(l&1){
                b[k++]=sqrt(a[0]);
                j=1;
                a2[c++]=a[0]-b[0];
            }
            else {
                b[k++]=sqrt((a[0]*10+a[1]));
                j=2;
                if(a[0]<b[0]){
                    a2[c++]=a[0]+10-b[0];
                    r=1;
                }
                r=a[1]-r;
                if(r>0)a2[c++]=1;
            }

            printf("%d\n",b[0]);
            printf("c=%d\n",c);
            for(i=c-1;i>=0;i--)printf("%d",a2[i]);
            printf("\n");


        }

    }
}
