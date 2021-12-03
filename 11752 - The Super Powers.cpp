/*#include<iostream>
#include<algorithm>
using namespace std;
typedef unsigned long long ul;
ul b[65536];
ul a[100000];
ul p[]={0,1,1,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,0,0,0,0,1,0,1,0,0,0,0,0,1,0,0,0,1,0,1,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,1,0,1,0,0,0,0};
ul i,c,k,d;
int main()
{
    a[0]=1;
    for(i=2,k=1;i<65536;i++){
        if(b[i]==0){
            d=i;
            c=1;
            while(1){
                d*=i;
                c++;
                if(d>18445618199572250625||d<=0)break;
                if(d<65536)b[d]=1;
                //if(p[c]==0)a[k++]=d;
                if(p[c]==0)k++;//cout<<d<<endl;
            }
        }
    }
    cout<<k;
    //sort(a,a+k);
    //for(i=0;i<k;i++)cout<<a[i]<<endl;
}
*/

/*#include <iostream>
using namespace std;
typedef unsigned long long ull;
ull x;

int main() {
	// your code goes here
	ull x = 65535;
	x = (x*x*x*x);

	cout<<x<<endl;

	return 0;
}
*/

/*#include<stdio.h>
#include<iostream>
#include<algorithm>
#include <cstdio>
#include <cmath>
typedef unsigned long long ull;
ull a[65537];
ull b[500000];
ull p[]={0,1,1,1,0,1,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
using namespace std;
int main()
{
    ull i,c,k;
    ull d;
    b[0]=1;
    for(i=2,k=1;i<65536;i++){
        if(a[i]==0){
            d=i;
            c=1;
            while(1){
                d=d*i;
                c++;
                if(d>18445618199572250625||d<=0)break;
                if(d<65536)a[d]=1;
                if(p[c]==0)b[k++]=d;
            }
        }
    }

    //sort(b,b+k);
    //for(i=0;i<k;i++)printf("%lu\n",b[i]);
    //printf("%lld\n",k);
    c=(unsigned long long int)(65535*65535*65535*65535);
    //cout<<(ull)c;
    cout<<(unsigned long long int)c<<endl;
}
*/

/*#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <vector>
using namespace std;

#define lmt 65535
typedef unsigned long long ULL;
const ULL np = 5, prime[] = {2, 3, 5, 7, 11};
vector<ULL> result;

main() {
//    freopen("752.out", "w", stdout);
    result.push_back(1);
    for (ULL i=2; i<=lmt; i++) {
        double lm = (double)64.0/(double)log2((double)i);
        for (int j=0; j<np; j++) {
            ULL k = prime[j]+prime[j];
            if (k>=lm) break;
            ULL last=1, hs;
            for (int t=0; t<prime[j]; t++) last *= i;
            hs = last;
            do {
                last *= hs;
                result.push_back(last);
                k += prime[j];
            } while (k<lm);
        }
    }
    sort(result.begin(), result.end());

    cout << 1 << endl;
    for (ULL i=1, size=result.size(); i<size; i++)
        if (result[i]!=result[i-1])
            cout << result[i] << endl;
}
*/


#include<iostream>
#include<algorithm>
using namespace std;
typedef unsigned long long ul;
ul a[65537];
ul b[100000];
ul i,j,c,k,d,x,q;
ul p[]={0,1,1,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,0,0,0,0,1,0,1,0,0,0,0,0,1,0,0,0,1,0,1,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,1,0,1,0,0,0,0};
int main()
{

    b[0]=1;
    for(i=2,k=1;i<65536;i++){
        if(a[i]==0){
            d=i;
            c=1;
            ul lt=18445618199572250625;
            x=0;
            while(lt>0){
                lt/=i;
                x++;
                if(lt/i==0&&lt>0)break;
            }
            while(1){
                d=d*i;
                c++;
                if(d<65536)a[d]=1;
                if(p[c]==0){
                    b[k++]=d;
                }
                if(c==x)break;
            }
        }
    }
    sort(b,b+k);
    for(i=0;i<k;i++)cout<<b[i]<<endl;
    cout<<k;
}
/*
#include<stdio.h>
#include<algorithm>
#define lp 9223188338910165709
using namespace std;
typedef long long ll;
ll a[65537];
ll b[100000];
ll p[]={0,1,1,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,0,0,0,0,1,0,1,0,0,0,0,0,1,0,0,0,1,0,1,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,1,0,1,0,0,0,0};
int main()
{
    ll i,j,c,d,k;
    b[0]=1;
    for(i=2,k=1;i<65537;i++){
        if(a[i]==0){
            d=i;
            c=1;
            while(1==1){
                d=d*i;
                c++;
                if(d>lp||d<=0)break;
                if(d<65537)a[d]=1;
                if(p[c]==0){
                    b[k++]=d;
                }
                if(c==33)break;
            }
        }
    }
    sort(b,b+k);
    for(i=0;i<k;i++)printf("%lld\n",b[i]);
}
*/
