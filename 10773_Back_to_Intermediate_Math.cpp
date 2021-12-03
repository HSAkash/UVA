#include<iostream>
#include<cmath>

using namespace std;

int main() {
    double d,v,u,t1,t2;
    int t;
    cin >> t;
    for(int i=1; i<=t; i++){
        cin>>d>>v>>u;
        cout << "Case " << i << ": ";
        if(v>=u || u==0 || v==0){
            cout << "can't determine" <<endl;
            continue;
        }
        t1=d/u;
        t2=d/sqrt(u*u-v*v);
        printf("%.3lf\n",fabs(t2-t1));
    }
}