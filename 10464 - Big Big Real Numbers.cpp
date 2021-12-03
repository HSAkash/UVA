#include<stdio.h>
#define SP ' '
#define P '.'
int main()
{
    int a[10000],a2[10000],b[10000],b2[10000],a3[10000],a4[10000];
    char s[25000],s2,s3;
    int t,i,k,k2,j,k1,k3,k4,r,c,tamp,k5,k6,p1,p2,p3,p4;
    scanf("%d",&t);
    getchar();
    while(t--){
        fgets(s,24000,stdin);
        for(i=0;i<10000;i++)a[i]=a2[i]=b[i]=b2[i]=a3[i]=a4[i]=0;
        p1=p2=0;
        k=k2=k1=k3=k4=r=c=k5=k6=p3=0;
        s2=s3='+';
        i=0;
        if(s[0]=='-'){
            s2='-';
            i=1;
        }
        for(k=0;s[i]>='0'&&s[i]<='9';i++,k++)a[k]=s[i]-'0';
        k1=k;
        k5=i;
        for(k=0;k<k1/2;k++){
            tamp=a[k];
            a[k]=a[k1-k-1];
            a[k1-k-1]=tamp;
        }

        if(s[i]==P)p1=1;
        k=0;
        if(s[i]!=SP)
            for(i=i+1,k=0;s[i]>='0'&&s[i]<='9';i++)a2[k++]=s[i]-'0';
        k2=k;


        if(s[i+1]=='-'){
            s3='-';
            i++;
        }
        for(i=i+1,k=0;s[i]>='0'&&s[i]<='9';i++)b[k++]=s[i]-'0';
        k3=k;
        k6=i;
        if(s[i]==P)p2=1;
        if(s[i]=='\0'){
            k3-=1;
            for(j=k3;j<1000;j++)b[j]=0;
        }
        for(k=0;k<k3/2;k++){
            tamp=b[k];
            b[k]=b[k3-k-1];
            b[k3-k-1]=tamp;
        }

        k=0;
        if(s[i+1]!='\0')for(i=i+1,k=0;s[i]>='0'&&s[i]<='9';i++)b2[k++]=s[i]-'0';
        k4=k;
        if(k4<0)k4=0;
        for(j=k4;j<1000;j++)b2[j]=0;


        if(k1<k3)k1=k3;
        if(k2<k4)k2=k4;



        if((s2=='+'&&s3=='+')||(s2=='-'&&s3=='-')){
            r=0;
            for(i=k2-1;i>=0;i--){
                c=r+a2[i]+b2[i];
                a4[i]=c%10;
                r=c/10;
            }
            for(i=k2-1;i>=0;i--){
                if(a4[i]>0){
                    k2=i;
                    break;
                }
                if(i==0&&a4[i]==0)k2=0;
            }

            for(i=0;i<k1;i++){
                c=r+a[i]+b[i];
                a3[i]=c%10;
                r=c/10;
            }
            if(r>0)a3[i++]=r;
            k1=i;
            for(i=k1-1;i>=0;i--){
                if(a3[i]>0){
                    k1=i;
                    break;
                }
                if(i==0&&a3[0]==0)k1=0;
            }

            if(s2=='-'&&a3[k1]>0)printf("-");

            for(i=k1;i>=0;i--)printf("%d",a3[i]);
            if(p1==1||p2==1){
                printf(".");
                for(i=0;i<=k2;i++)printf("%d",a4[i]);
            }
            printf("\n");


        }




        else{
            int y,y1,y2,z,z1,z2,p,q;
            y=y1=y2=0;
            z=z1=z2=0;
            for(i=k1-1;i>=0;i--){
                if(a[i]>b[i]){
                    y1=1;
                    break;
                }
                else if(a[i]<b[i]){
                    y2=1;
                    break;
                }
            }
            if(y1==1||y2==1)y=1;
            if(y==0){
                for(i=0;i<k2;i++){
                    if(a2[i]>b2[i]){
                        z1=1;
                        break;
                    }
                    else if(a2[i]<b2[i]){
                        z2=1;
                        break;
                    }
                }
                if(z1==1||z2==1)z=1;
            }
            if(z==0&&y==0){
                printf("0");
                if(p1==1||p2==1)printf(".0");
                printf("\n");
            }

            else{
                if(y1==1||z1==1){
                    r=0;
                    for(i=k2-1;i>=0;i--){
                        c=r+b2[i];
                        p=a2[i];
                        if(c>p){
                            p+=10;
                            r=1;
                        }
                        else r=0;
                        a4[i]=p-c;
                    }
                    for(i=k2-1;i>=0;i--){
                        if(a4[i]>0){
                            k2=i;
                            break;
                        }
                        else if(i==0&&a4[0]==0)k2=0;
                    }
                    for(i=0;i<k1;i++){
                        c=r+b[i];
                        p=a[i];
                        if(c>p){
                            p+=10;
                            r=1;
                        }
                        else r=0;
                        a3[i]=p-c;
                    }
                    for(i=k1-1;i>=0;i--){
                        if(a3[i]>0){
                            k1=i;
                            break;
                        }
                        else if(i==0&&a3[i]==0)k1=0;
                    }
                    if(s2=='-')printf("-");

                    for(i=k1;i>=0;i--)printf("%d",a3[i]);
                    if(p1==1||p2==1){
                        printf(".");
                        for(i=0;i<=k2;i++)printf("%d",a4[i]);
                    }
                    printf("\n");


                }
                else if(y2==1||z2==1){
                    r=0;
                    for(i=k2-1;i>=0;i--){
                        c=r+a2[i];
                        p=b2[i];
                        if(c>p){
                            p+=10;
                            r=1;
                        }
                        else r=0;
                        a4[i]=p-c;
                    }
                    for(i=k2-1;i>=0;i--){
                        if(a4[i]>0){
                            k2=i;
                            break;
                        }
                        else if(i==0&&a4[0]==0)k2=0;
                    }
                    for(i=0;i<k1;i++){
                        c=r+a[i];
                        p=b[i];
                        if(c>p){
                            p+=10;
                            r=1;
                        }
                        else r=0;
                        a3[i]=p-c;
                    }
                    for(i=k1-1;i>=0;i--){
                        if(a3[i]>0){
                            k1=i;
                            break;
                        }
                        else if(i==0&&a3[i]==0)k1=0;
                    }
                    if(s3=='-')printf("-");

                    for(i=k1;i>=0;i--)printf("%d",a3[i]);
                    if(p1==1||p2==1){
                        printf(".");
                        for(i=0;i<=k2;i++)printf("%d",a4[i]);
                    }
                    printf("\n");
                }
            }
        }

    }
}
