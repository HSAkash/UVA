#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int pos, start, second, end;
    while(scanf("%d%d%d%d", &pos, &start, &second, &end), pos || start || second || end){
        cout << 1080 + ((pos - start + 40) % 40 + (second - start + 40) % 40 + (second - end + 40) % 40) * 9 <<endl;
    }
}