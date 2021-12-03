#include<iostream>

using namespace std;

int main(){
    for(int i=1; ; i++){
        int n;
        cin>>n;
        if(n){
            int result=0, m;
            while(n--){
                cin>> m;
                if(m)result++;
                else result--;
            }
            cout << "Case " << i << ": " <<result<<endl;
        }
        else break;
    }
}