#include<stdio.h>
#include<string.h>
int a[100],b[100],c[100];
int i,j,k,l,m,n,d,p,q,r;
int main()
{
    char s[100];
    while(scanf("%s",s)){
        for(i=0;i<100;i++)a[i]=b[i]=c[i]=0;
        int l=strlen(s);
        if(s[0]>='0'&&s[0]<='9'){
            for(i=0;i<l;i++)a[i]=s[i]-'0';
            k=l;
            p=n=0;
            while(1){
                if(k==n)break;
                r=0;
                for(i=n;i<k;i++){
                   m=r*10+a[i];
                   a[i]=m/26;
                   r=m%26;
                }
                if(r==0)r=26;
                if(c[p-1]==26)r-=1;
                c[p++]=r;
                for(i=0;i<k;i++){
                    if(a[i]>0)break;
                }
                n=i;
            }
            for(i=p-1;i>=0;i--)printf("%c",c[i]+'a'-1);
            for(i=0;i<22-p;i++)printf(" ");
            n=l%3;
            if(n==0)n=3;
            for(i=0;i<l&&n>0;i++,n--)printf("%c",s[i]);
            for(;i<l;i++,n++){
                if(n%3==0)printf(",");
                printf("%c",s[i]);
            }
            printf("\n");
        }
        else if(s[0]>='a'&&s[0]<='z'){
             i=l-1;
             p=s[i--]-'a'+1;
             r=k=q=0;
             c[k++]=p%10;
             if(p/10>0)c[k++]=p/10;
             a[q++]=1;
             for(;i>=0;i--){
                int r2=0;
                for(j=0;j<q;j++){
                    m=a[j]*26+r2;
                    a[j]=m%10;
                    r2=m/10;
                }
                while(r2>0){
                    a[q++]=r2%10;
                    r2/=10;
                }
                int q2=q;
                r2=0;
                p=s[i]-'a'+1;
                for(j=0;j<q2;j++){
                    m=a[j]*p+r2;
                    b[j]=m%10;
                    r2=m/10;
                }
                while(r2>0){
                    b[q2++]=r2%10;
                    r2/=10;
                }
                k=q2;
                r2=0;
                for(j=0;j<k;j++){
                    m=b[j]+c[j]+r2;
                    c[j]=m%10;
                    r2=m/10;
                }
                while(r2>0){
                    c[k++]=r2%10;
                    r2/=10;
                }
             }
             printf("%s",s);
             n=k%3;
             for(i=0;i<22-l;i++)printf(" ");
             if(n==0)n=3;
             for(i=k-1;i>=0&&n>0;i--,n--){
                printf("%d",c[i]);
             }
             n=0;
             for(;i>=0;i--,n++){
                if(n%3==0)printf(",");
                printf("%d",c[i]);
             }
             printf("\n");

        }
        else if(s[0]=='*')return 0;
    }
}
