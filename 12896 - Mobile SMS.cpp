#include<stdio.h>
#include<string>
int main()
{
    char s1[]={'.',',','?','"'};
    char s2[]="abc",s8[]="tuv",s9[]="wxyz";
    char s3[]="def",s4[]="ghi",s5[]="jkl",s6[]="mno",s7[]="pqrs";
    int t,n,m,i;
    while(scanf("%d",&t)!=EOF){
        while(t--){
            scanf("%d",&n);
            int a[n];
            for(i=0;i<n;i++)scanf("%d",&a[i]);
            for(i=0;i<n;i++){
                scanf("%d",&m);
                if(a[i]==0)printf(" ");
                else if(a[i]==1)printf("%c",s1[m-1]);
                else if(a[i]==2)printf("%c",s2[m-1]);
                else if(a[i]==3)printf("%c",s3[m-1]);
                else if(a[i]==4)printf("%c",s4[m-1]);
                else if(a[i]==5)printf("%c",s5[m-1]);
                else if(a[i]==6)printf("%c",s6[m-1]);
                else if(a[i]==7)printf("%c",s7[m-1]);
                else if(a[i]==8)printf("%c",s8[m-1]);
                else if(a[i]==9)printf("%c",s9[m-1]);
            }


            printf("\n");
        }
    }
}
