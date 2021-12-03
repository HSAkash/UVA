#include<iostream>
#include<map>
using namespace std;

int main(){
    map<string, string> charMap;
    charMap["1"] = "`";
    charMap["2"] = "1";
    charMap["3"] = "2";
    charMap["4"] = "3";
    charMap["5"] = "4";
    charMap["6"] = "5";
    charMap["7"] = "6";
    charMap["8"] = "7";
    charMap["9"] = "8";
    charMap["0"] = "9";
    charMap["-"] = "0";
    charMap["="] = "-";
    charMap["W"] = "Q";
    charMap["E"] = "W";
    charMap["R"] = "E";
    charMap["T"] = "R";
    charMap["Y"] = "T";
    charMap["U"] = "Y";
    charMap["I"] = "U";
    charMap["O"] = "I";
    charMap["P"] = "O";
    charMap["["] = "P";
    charMap["]"] = "[";
    charMap["\\"] = "]";
    charMap["S"] = "A";
    charMap["D"] = "S";
    charMap["F"] = "D";
    charMap["G"] = "F";
    charMap["H"] = "G";
    charMap["J"] = "H";
    charMap["K"] = "J";
    charMap["L"] = "K";
    charMap[";"] = "L";
    charMap["'"] = ";";
    charMap["X"] = "Z";
    charMap["C"] = "X";
    charMap["V"] = "C";
    charMap["B"] = "V";
    charMap["N"] = "B";
    charMap["M"] = "N";
    charMap[","] = "M";
    charMap["."] = ",";
    charMap["/"] = ".";
    charMap[" "] = " ";

    string input;
    string data;
    while(getline(cin,input)){
        
        for(int i=0; i<input.length(); i++){
            data = input[i];
            cout<<charMap[data];
        }
        cout<<endl;
    }
}