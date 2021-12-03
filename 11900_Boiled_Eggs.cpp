#include <iostream>

using namespace std;

int main(){
    int T,n,P,Q,a[30];
    
    cin >> T;
    
    for(int tc = 1; tc<=T; tc++){
        cin >> n >> P >> Q;
        
        for(int i = 0;i<n;++i) cin>>a[i];
        
        int ans = 0;
        
        for(int i = 0,q = 0;i<n;++i){
            if(ans+1<=P && q+a[i]<=Q){
                ans++;
                q += a[i];
            }else break;
        }
        
        printf("Case %d: %d\n",tc,ans);
    }
    
    return 0;
}