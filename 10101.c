#include<stdio.h>
#include<string.h>
int main()
{
    int l,a=1,b;
    char s[16];
    while(scanf("%s",s)!=EOF){
        l=strlen(s);
        b=l;
        if(a>0&&a<10)printf("   ");
        else if(a>9&&a<100)printf("  ");
        else if("a>99&&a<1000")printf(" ");
        printf("%d.",a);
        a++;
        if(l==15){
            printf(" %c kuti",s[b-l]);
            l=l-1;
        }
        if(l==14){
            if(s[b-l]!='0')printf(" %c%c lakh",s[b-l],s[b+1-l]);
            else if(s[b-l]=='0'&&s[b+1-l]!='0')printf(" %c lakh",s[b+1-l]);
            l-=2;
        }
        else if(l==13){
            printf(" %c lakh",s[b-l]);
            l-=1;
        }
        if(l==12){
            if(s[b-l]!='0')printf(" %c%c hajar",s[b-l],s[b+1-l]);
            else if(s[b-l]=='0'&&s[b+1-l]!='0')printf(" %c hajar",s[b+1-l]);
            l-=2;
        }
        else if(l==11){
            printf(" %c hajar",s[b-l]);
            l-=1;
        }
        if(l==10){
            if(s[b-l]!='0')printf(" %c shata",s[b-l]);
            l-=1;
        }
        if(l==9){
            if(s[b-l]!='0')printf(" %c%c",s[b-l],s[b+1-l]);
            else if(s[b-l]=='0'&&s[b+1-l]!='0')printf(" %c",s[b+1-l]);
            printf("kuti ");
            l=l-2;
        }
        else if(l==8){
            printf("%c kuti ",s[b-l]);
            l=l-1;
        }
        if(l==7){
            if(s[b-l]!='0')printf(" %c%c lakh",s[b-l],s[b+1-l]);
            else if(s[b-l]=='0'&&s[b+1-l]!='0')printf(" %c lakh",s[b+1-l]);
            l=l-2;
        }
        else if(l==6){
            printf(" %c lakh",s[b-l]);
            l=l-1;
        }
        if(l==5){
            if(s[b-l]!='0')printf(" %c%c hajar",s[b-l],s[b+1-l]);
            else if(s[b-l]=='0'&&s[b+1-l]!='0')printf(" %c hajar",s[b+1-l]);
            l=l-2;
        }
        else if(l==4){
            printf(" %c hajar",s[b-l]);
            l=l-1;
        }
        if(l==3&&s[b-l]!='0'){
            printf(" %c shata",s[b-l]);
            l=l-1;
        }
        if(l==2){
            if(s[b-l]!='0')printf(" %c%c",s[b-l],s[b+1-l]);
            else if(s[b-l]=='0'&&s[b+1-l]!='0')printf(" %c",s[b+1-l]);
            l=l-2;
        }
        else if(l==1&&s[b-l]!='0'){
                printf(" %c",s[b-l]);
        }
        printf("\n");
    }
}
