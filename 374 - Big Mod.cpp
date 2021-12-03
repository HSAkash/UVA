#include<stdio.h>
typedef long long ll;
int main()
{
    ll b,p,m;
    while(scanf("%lld%lld%lld",&b,&p,&m)!=EOF){
        ll r=1,B=b;
        while(p>0){
            if(p%2==1){
                r=r*B;
                r=r%m;
            }
            p=p/2;
            B=B*B;
            B=B%m;

        }
        printf("%lld\n",r);
    }
}


//#include<stdio.h>
//long long Mod(long long x, long long y, long long m) {
// long long ans = 1, tmp = x;
// while(y) {
//  if(y&1) {
//   ans *= tmp;
//   ans %= m;
//  }
//  y >>= 1;
//  tmp *= tmp, tmp %= m;
// }
// return ans;
//}
//int main() {
// int B, P, M;
// while(scanf("%d %d %d", &B, &P, &M) == 3) {
//  printf("%lld\n", Mod(B, P, M));
// }
//    return 0;
//}
