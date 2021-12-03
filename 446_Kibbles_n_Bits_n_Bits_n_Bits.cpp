#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <bitset>
using namespace std;

string int_to_binary(int data){
    return bitset<13>(data).to_string();
}

vector <string> split(string str, string token){
    vector<string>result;
    while(str.size()){
        int index = str.find(token);
        if(index!=string::npos){
            result.push_back(str.substr(0,index));
            str = str.substr(index+token.size());
            if(str.size()==0)result.push_back(str);
        }else{
            result.push_back(str);
            str = "";
        }
    }
    return result;
}
int HexToDec(string n) {
     return stoi(n, 0, 16);
}

int main()
{
    int t;
    cin >> t;
    cin.ignore(1,'\n');
    string input;
    while(t--){
        
        getline(cin, input);
        vector<string> input_list = split(input, " ");
        int a, b, result;
        a = HexToDec(input_list[0]);
        b = HexToDec(input_list[2]);
        if(input_list[1]=="+")result = a + b;
        else result = a - b;
        cout << int_to_binary(a) << " " << input_list[1] << " " << int_to_binary(b) << " = " << result << endl;

    }

    return 0;
}