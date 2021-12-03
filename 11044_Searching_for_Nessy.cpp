#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int t, r,c;
    cin >> t;
    while(t-- && scanf("%d %d",&r,&c)){
        cout << (r / 3) * (c / 3) << endl;
    }
}