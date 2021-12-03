#include<iostream>
#include <cmath>
using namespace std;

int main(){
    int t;
    long long num;
    cin >> t;
    while(t--){
        cin>> num;
        cout <<  (long long)floor(sqrt( 2.0 * num + 0.25 ) + 0.5) - 1 << endl;
    }
}