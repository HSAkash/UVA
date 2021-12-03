#include<iostream>
using namespace std;

int main(){
    string s[101];
    int len=0, totals=0;
    while(getline(cin, s[totals])){
        if(len<s[totals].size())len = s[totals].size();
        totals++;
    }
    for(int i=0; i<len; i++){
        for(int j=totals-1; j>=0; j--)
            if (s[j].size() > i)cout << s[j][i];
            else cout << ' ';
        cout << '\n';
    }

}