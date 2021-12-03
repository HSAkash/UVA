#include<iostream>
using namespace std;
int main(){
    int total = 0, amount, t;
    string s;
    cin >> t;
    while(t--){
        cin >> s;
        if (s[0]=='d'){
            cin >> amount;
            total += amount;
        }
        else cout << total << endl;
    }

}