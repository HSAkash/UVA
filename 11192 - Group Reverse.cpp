#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000],tamp;
    int i,j,k,n,l,m,l2;
    while(scanf("%d",&n)&&n!=0){
        getchar();
        fgets(s,995,stdin);
        l=strlen(s);
        if(n==1){
            l=l-1;
            for(i=0;i<l/2;i++){
                tamp=s[i];
                s[i]=s[l-i-1];
                s[l-i-1]=tamp;
            }
            s[l]='\0';
            printf("%s\n",s);
        }
        else{
            l2=l/n;
        for(i=0;;){
            if(s[i]=='\0')break;
            k=i+l2;
            for(j=i,m=0;m<l2/2;m++,j++){
                tamp=s[j];
                s[j]=s[k-m-1];
                s[k-m-1]=tamp;
            }
            i=k;
        }
        s[l-1]='\0';
        printf("%s\n",s);
        }
    }
}
