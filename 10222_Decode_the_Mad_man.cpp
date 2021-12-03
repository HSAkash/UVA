#include<iostream>
#include<map>
#include<cctype>
using namespace std;

int main(){
    map<string, string> charMap;
    charMap["2"] = "`";
    charMap["3"] = "1";
    charMap["4"] = "2";
    charMap["5"] = "3";
    charMap["6"] = "4";
    charMap["7"] = "5";
    charMap["8"] = "6";
    charMap["9"] = "7";
    charMap["0"] = "8";
    charMap["-"] = "9";
    charMap["="] = "0";

    charMap["e"] = "q";
    charMap["r"] = "w";
    charMap["t"] = "e";
    charMap["y"] = "r";
    charMap["u"] = "t";
    charMap["i"] = "y";
    charMap["o"] = "u";
    charMap["p"] = "i";
    charMap["["] = "o";
    charMap["]"] = "p";
    charMap["\\"] = "[";


    charMap["d"] = "a";
    charMap["f"] = "s";
    charMap["g"] = "d";
    charMap["h"] = "f";
    charMap["j"] = "g";
    charMap["k"] = "h";
    charMap["l"] = "j";
    charMap[";"] = "k";
    charMap["'"] = "l";


    charMap["c"] = "z";
    charMap["v"] = "x";
    charMap["b"] = "c";
    charMap["n"] = "v";
    charMap["m"] = "b";
    charMap[","] = "n";
    charMap["."] = "m";
    charMap["/"] = ",";
    charMap[" "] = " ";

    string input;
    string data;
    while(getline(cin,input)){
        
        for(int i=0; i<input.length(); i++){
            data = tolower(input[i]);
            cout<<charMap[data];
        }
        cout<<endl;
    }
}