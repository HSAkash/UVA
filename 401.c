#include<stdio.h>
#include<string.h>
int main()
{
    char s[30000];
    int l,i,x,y;
    while(scanf("%s",&s)!=EOF){
        l=strlen(s);
        x=0;
        y=0;
        for(i=0;i<l;i++){
            if(s[i]!=s[l-i-1])y=1;
            if((s[i]=='A' && s[l-i-1]=='A')||(s[i]=='E' && s[l-i-1]=='3')||(s[i]=='3' && s[l-i-1]=='E')||
               (s[i]=='H' && s[l-i-1]=='H')||(s[i]=='I' && s[l-i-1]=='I')||(s[i]=='J' && s[l-i-1]=='L')||
               (s[i]=='L' && s[l-i-1]=='J')||(s[i]=='M' && s[l-i-1]=='M')||(s[i]=='O' && s[l-i-1]=='O')||
               (s[i]=='2' && s[l-i-1]=='S')||(s[i]=='T' && s[l-i-1]=='T')||(s[i]=='U' && s[l-i-1]=='U')||
               (s[i]=='V' && s[l-i-1]=='V')||(s[i]=='W' && s[l-i-1]=='W')||(s[i]=='X' && s[l-i-1]=='X')||
               (s[i]=='Y' && s[l-i-1]=='Y')||(s[i]=='Z' && s[l-i-1]=='5')||(s[i]=='5' && s[l-i-1]=='Z')||
               (s[i]=='1' && s[l-i-1]=='1')||(s[i]=='S' && s[l-i-1]=='2')||(s[i]=='8' && s[l-i-1]=='8'))
                x++;
        }
        if(y==0&&x==l)printf("%s -- is a mirrored palindrome.\n\n", s);
        else if(y==0&&x!=l)printf("%s -- is a regular palindrome.\n\n", s);
        else if(y==1&&x==l)printf("%s -- is a mirrored string.\n\n", s);
        else printf("%s -- is not a palindrome.\n\n", s);
    }
    return 0;
}
