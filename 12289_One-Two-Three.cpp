#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int result;
        if(s.length()==5) result=3;
        else{
            int cnt=0 ;
            if(s[0]=='o') cnt++;
            if(s[1]=='n') cnt++;
            if(s[2]=='e') cnt++;

            if (cnt>=2)result=1;
            else result=2;
        }
        cout << result << endl;
    }
}