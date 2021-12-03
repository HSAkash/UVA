#include<iostream>
#include<map>
using namespace std;

int main(){
    map<string, string> datadict;
    datadict["Hajj"] = "Hajj-e-Akbar";
    datadict["Umrah"] = "Hajj-e-Asghar";
    string s;
    for (int i = 1; ;i++){
        cin >> s;
        if(s[0]=='*')break;
        cout << "Case " << i << ": " <<datadict[s]<<endl;
    }
}