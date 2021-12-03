#include<iostream>
#include<set>
using namespace std;

int main()
{
    set<char> vowel{'A', 'a', 'E', 'e', 'I', 'i', 'O', 'o', 'U', 'u'};
    string input;
    while(getline(cin, input)){
        string consonant = "";
        bool word=false;
        for(int i=0; i<input.length(); i++){
            
            if(isalpha(input[i])){
                if(consonant == "" && vowel.find(input[i])==vowel.end() && !word)consonant = input[i];
                else{
                    cout<<input[i];
                    if(!word)word=true;
                }
                
            }
            else{
                cout<<consonant;
                consonant="";
                if(i>0&&isalpha(input[i-1]))cout<<"ay";
                cout<<input[i];
                word=false;
            }
        }
        if(isalpha(input[input.length()-1]))cout<<consonant<<"ay";
        cout<< endl;
    }
}