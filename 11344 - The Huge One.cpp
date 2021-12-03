#include<stdio.h>
#include<string.h>
int main()
{
    int a[1000],b[12];
    char s[1005];
    int y,i,j,k,l,t,n,c,p,q,r,d,x,z;
    scanf("%d",&t);
    while(t--){
        getchar();
        scanf("%s",s);
        scanf("%d",&n);
        for(i=0;i<n;i++)scanf("%d",&b[i]);
        p=0;
        q=0;
        for(i=0;s[i];i++){
            a[i]=s[i]-'0';
            if(i&1)p+=a[i];
            else q+=a[i];
        }
        k=i;
        for(i=0;i<k;i++)printf("%d",a[i]);
        printf(" - ");

        y=0;


        for(i=0;i<n;i++){
            if(b[i]==2&&(a[k-1]&1)){
                y=1;
                break;
            }
            else if(b[i]==3&&((p+q)%3!=0)){
                y=1;
                break;
            }
            else if(b[i]==4){
                if(k==1)r=a[k-1];
                else r=a[k-2]*10+a[k-1];
                if(r%4!=0){
                    y=1;
                    break;
                }
            }
            else if(b[i]==5){
                if(a[k-1]==0||a[k-1]==5);
                else{
                    y=1;
                    break;
                }
            }
            else if(b[i]==6){
                if((a[k-1]%2==0)&&((p+q)%3==0));
                else{
                    y=1;
                    break;
                }
            }
            else if(b[i]==7){
                l=0;
                for(j=0;j<k;j++){
                    l=l*10+a[j];
                    l=l%7;
                }
                if(l!=0){
                    y=1;
                    break;
                }

            }
            else if(b[i]==8){
                if(k>2)d=a[k-3]*100+a[k-2]*10+a[k-1];
                else if(k==2)d=a[k-2]*10+a[k-1];
                else d=a[k-1];
                if(d%8!=0){
                    y=1;
                    break;
                }
            }
            else if(b[i]==9&&((p+q)%9!=0)){
                y=1;
                break;
            }
            else if(b[i]==10&&a[k-1]!=0){
                y=1;
                break;
            }
            else if(b[i]==11&&((p-q)%11!=0)){
                y=1;
                break;
            }
            else if(b[i]==12){
                if(k==1)r=a[k-1];
                else r=a[k-2]*10+a[k-1];
                if(r%4!=0||((p+q)%3!=0)){
                    y=1;
                    break;
                }
            }
        }


        if(y==0)printf("Wonderful.");
        else printf("Simple.");
        printf("\n");
    }

}
