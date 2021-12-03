#include<iostream>
#include<string.h>
#define N '\n'
#define SP ' '
#define H '-'
using namespace std;
int main()
{
    int a[26];
    int i,j,n,t;
    while(cin>>t){
        for(i=1;i<=t;i++){
            cin>>n;
            memset(a,0,sizeof(a));
            for(j=0;j<n;j++){
                char ch;
                cin>>ch;
                a[ch-'A']++;
            }
            cout <<"Case "<<i<<": ";
            if(a[0]==n)cout<<"ABANDONED";
            else if(a[1]==a[22])cout<<"DRAW "<<a[1]<<SP<<a[19];
            else if(a[0]+a[1]==n)cout<<"BANGLAWASH";
            else if(a[0]+a[22]==n)cout<<"WHITEWASH";
            else {
                if(a[1]>a[22])cout<<"BANGLADESH "<<a[1]<<SP<<H<<SP<<a[22];
                else cout<<"WWW "<<a[22]<<SP<<H<<SP<<a[1];
            }
            cout<<N;
        }
    }
}
