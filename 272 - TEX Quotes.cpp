#include<stdio.h>
#include<iostream>
#define N '\n'
#define SP ' '
using namespace std;
int main()
{
    int count=0;
    char ch;
    while(scanf("%c",&ch)!=EOF){
        if(ch==N){
            cout<<N;
        }
        else if(ch=='"'){
            if(count&1)cout<<"'"<<"'";
            else cout<<"`"<<"`";
            count++;
        }
        else if(ch==SP)cout<<SP;
        else cout<<ch;
    }
}
