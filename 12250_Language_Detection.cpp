#include<iostream>
#include<map>

using namespace std;
int main(){
    map<string, string> datadict;
    datadict["HELLO"] = "ENGLISH";
    datadict["HOLA"] = "SPANISH";
    datadict["HALLO"] = "GERMAN";
    datadict["BONJOUR"] = "FRENCH";
    datadict["CIAO"] = "ITALIAN";
    datadict["ZDRAVSTVUJTE"] = "RUSSIAN";
    string data;
    for (int i=1;;i++){
        cin >> data;
        if (data == "#")break;
        cout << "Case " << i << ": ";
        if (datadict.find(data) == datadict.end()) cout << "UNKNOWN" << endl;
        else cout << datadict[data] << endl;
    }
}