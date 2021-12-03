#include<stdio.h>
int main()
{
    int n,i,j,k,y,z,sum,a[100];
    char s[1000];
    scanf("%d",&n);
    getchar();
    printf("Lumberjacks:\n");
    while(n--){
        fgets(s,995,stdin);
        sum=0;
        y=z=0;
        for(i=0,k=0;s[i];i++){
            if(s[i]>='0'&&s[i]<='9')sum=sum*10+(s[i]-'0');
            else{
                a[k++]=sum;
                sum=0;
            }
        }
        for(i=0;i<k-1;i++){
            if(a[i]>=a[i+1]){
                y=1;
                break;
            }
        }
        for(i=0;i<k-1;i++){
            if(a[i]<=a[i+1]){
                z=1;
                break;
            }
        }
        if(z==1&&y==1)printf("Unordered\n");
        else printf("Ordered\n");
    }
}
