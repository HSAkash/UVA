#include<iostream>
#include<map>
#include<iterator>
#include<vector>
#include<set>
#include<string>


using namespace std;


void printmap(map<string,string>givenplural){
    map<string, string>::iterator itr;
    for (itr = givenplural.begin(); itr != givenplural.end(); ++itr) {
        cout << itr->first<< ' ' << itr->second << '\n';
    }
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

int main(){
    int L, N;
    cin >> L >> N;
    cin.ignore(1);
    map<string,string>givenplural;
    map<string, string> makeplural;
    set<char>vowels{'a', 'e', 'i', 'o', 'u'};
    makeplural["y"] = "es";
    makeplural["o"] = "es";
    makeplural["s"] = "es";
    makeplural["ch"] = "es";
    makeplural["sh"] = "es";
    makeplural["x"] = "es";
    makeplural[" "] = "s";
    string input;
    while(L--){
        getline(cin, input);
        vector<string> input_list = split(input, " ");
        givenplural[input_list[0]] = input_list[1];
    }
    // printmap(givenplural);
    int len;
    string s1,s2, addstr;
    while (N-- && cin>>input){
        len = input.length();
        if(givenplural.find(input) != givenplural.end()){
            cout<<givenplural[input]<<endl;
        }
        else{
            addstr = "s";
            s1 = input.substr(len-1,1);
            if(len>1){
                s2 = input.substr(len-2,2);
                if(s2[1]=='y'){
                    if(vowels.find(s2[0])==vowels.end()){
                        input[len-1] = 'i';
                        addstr = "es";
                    }
                    
                }
                else if(makeplural.find(s2)!=makeplural.end())addstr = "es";
                else if(makeplural.find(s1)!=makeplural.end())addstr = "es";
            }
            else{
                if(makeplural.find(s1)!=makeplural.end() && s1!="y")addstr = "es";
            }
            cout<<input<<addstr<<endl;
        }
    }
}