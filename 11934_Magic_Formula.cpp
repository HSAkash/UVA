#include<iostream>

using namespace std;


int main(){
    int a,b,c,d,l, ans;
    while(cin>>a>>b>>c>>d>>l, a!=0||b!=0||c!=0||d!=0||l!=0){
        ans = 0;
        for(int x=0; x<=l; x++){
            if((a*x*x + b*x + c) % d == 0)ans++;
        }
        cout<<ans<<endl;
    }
}