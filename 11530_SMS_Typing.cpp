#include<iostream>
#include<map>
using namespace std;

int main(){
    map<char, int>charmap{
        {'a', 1},
        {'b', 2},
        {'c', 3},
        {'d', 1},
        {'e', 2},
        {'f', 3},
        {'g', 1},
        {'h', 2},
        {'i', 3},
        {'j', 1},
        {'k', 2},
        {'l', 3},
        {'m', 1},
        {'n', 2},
        {'o', 3},
        {'p', 1},
        {'q', 2},
        {'r', 3},
        {'s', 4},
        {'t', 1},
        {'u', 2},
        {'v', 3},
        {'w', 1},
        {'x', 2},
        {'y', 3},
        {'z', 4},
        {' ', 1},
    };
    int t;
    int sum;
    cin >> t;
    cin.ignore(1);
    string input;
    for(int i=1; i<=t; i++){
        getline(cin, input);
        sum = 0;
        for(int j=0; j< input.length(); j++)sum += charmap[input[j]];
        printf("Case #%d: %d\n",i, sum);

    }
}