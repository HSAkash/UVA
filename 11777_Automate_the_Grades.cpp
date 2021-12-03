#include<iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int t1, t2, fi, att;
        int classTests[3];
        char result;
        cin >> t1 >> t2 >> fi >> att >> classTests[0] >> classTests[1] >> classTests[2];
        sort(classTests, classTests + 3);
        int sum = t1 + t2 + fi + att + (classTests[1] + classTests[2]) / 2;
        if(sum >= 90)result='A';
        else if(sum >= 80)result='B';
        else if(sum >= 70)result='C';
        else if(sum >= 60)result='D';
        else result='F';
        cout << "Case " << i <<": "<<result<<endl;
    }
}