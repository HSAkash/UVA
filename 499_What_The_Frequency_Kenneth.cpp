#include<iostream>

using namespace std;

int main(){
    string input;
    while(getline(cin,input)){
        int charmap[125]={0};
        for(int i=0; i<input.length(); i++){
            if(isalpha(input[i]))
            charmap[(int)input[i]]++;
        }
        int MAX = 0;
        for(int i=0;i<125;i++)if(MAX<charmap[i])MAX=charmap[i];
        for(int i=0;i<125;i++)
            if(charmap[i]==MAX)cout<<(char)i;
        cout<<" "<<MAX<<endl;

    }
}