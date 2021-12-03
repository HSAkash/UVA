#include<stdio.h>
#include<math.h>
#include<string.h>
using namespace std;
int a[100001];
void prime(int *a)
{
   int y,z,x;
    a[0]=-1;
    a[1]=-1;
    for(y=4;y<=100001;y=y+2)a[y]=-1;
    for(y=3,x=1;y<=100001;y=y+2){
        if(a[y]==0){}
        for(z=y+y;z<=100001;z=z+y)a[z]=-1;
    }
}
int str5(char s[1001])
{
    int l,i,num,b=0,y=0;
    l=strlen(s)-1;
    for(i=0;i<l;i++)if(s[i]!='0')y=1;
    if(y==0)return -1;
    for(i=0;i+4<l;i++){
        num=(s[i]-'0')*10000+(s[i+1]-'0')*1000+(s[i+2]-'0')*100+(s[i+3]-'0')*10+(s[i+4]-'0');
        if(a[num]==0&&num>b)b=num;
    }
    return b;
}
int str4(char s[1001])
{
    int l,i,num,b=0;
    l=strlen(s)-1;
    for(i=0;i+3<l;i++){
        num=(s[i]-'0')*1000+(s[i+1]-'0')*100+(s[i+2]-'0')*10+(s[i+3]-'0');
        if(a[num]==0&&num>b)b=num;
    }
    return b;
}
int str3(char s[1001])
{
    int l,i,num,b=0;
    l=strlen(s)-1;
    for(i=0;i+2<l;i++){
        num=(s[i]-'0')*100+(s[i+1]-'0')*10+(s[i+2]-'0');
        if(a[num]==0&&num>b)b=num;
    }
    return b;
}
int str2(char s[1001])
{
    int l,i,num,b=0;
    l=strlen(s)-1;
    for(i=0;i+1<l;i++){
        num=(s[i]-'0')*10+(s[i+1]-'0');
        if(a[num]==0&&num>b)b=num;
    }
    return b;
}
int str1(char s[1001])
{
    int l,i,num,b=0;
    l=strlen(s)-1;
    for(i=0;i<l;i++){
        num=s[i]-'0';
        if(a[num]==0&&num>b)b=num;
    }
    return b;
}
int main()
{
    prime(a);
    char s[1001];
    int b;
    while(fgets(s,1001,stdin)){
        b=0;
        b=str5(s);
        if(b==-1)return 0;
        if(b==0)
            if((b=str4(s))==0)
            if((b=str3(s))==0)
            if((b=str2(s))==0)
        if((b=str1(s))==0){}
        printf("%d\n",b);
    }
}
