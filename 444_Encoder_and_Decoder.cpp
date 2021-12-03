#include<iostream>
#include<string>
#include<map>
#include <algorithm>
using namespace std;

void encodeString(string input, map<string, string>strToInt){
    string result, strkey;
    for(int i=0; i<input.length(); i++){
        strkey = input[i];
        result += strToInt[strkey];
    }
    reverse(result.begin(), result.end());
    cout << result << endl;
}

void decodeString(string input, map<string, string>strToInt){
    string result, strkey;
    reverse(input.begin(), input.end());
    for(int i=0; i<input.length(); i++){
        if(input[i]=='1'){
            strkey = input.substr(i,3);
            i += 2;
        }
        else{
            strkey = input.substr(i,2);
            i += 1;
        }
        result += strToInt[strkey];
    }
    cout << result << endl;
}


int main(){
    map <string, string> strToInt;
    string key1, key2;
    for(char c = 'a'; c <= 'z'; c++) {
        key2 = to_string((int)c);
        key1 = c;
        strToInt[key1] = key2;
        strToInt[key2] = key1;
    }
    for(char c = 'A'; c <= 'Z'; c++) {
        key2 = to_string((int)c);
        key1 = c;
        strToInt[key1] = key2;
        strToInt[key2] = key1;
    }
    strToInt[" "] = "32";
    strToInt["!"] = "33";
    strToInt[","] = "44";
    strToInt["."] = "46";
    strToInt[":"] = "58";
    strToInt[";"] = "59";
    strToInt["?"] = "63";

    strToInt["32"] = " ";
    strToInt["33"] = "!";
    strToInt["44"] = ",";
    strToInt["46"] = ".";
    strToInt["58"] = ":";
    strToInt["59"] = ";";
    strToInt["63"] = "?";
    string input;
    while(getline(cin, input)) {
        if(isdigit(input[0]))decodeString(input, strToInt);
        else encodeString(input, strToInt);
    }


}