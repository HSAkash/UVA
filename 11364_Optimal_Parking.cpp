#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int c, n, t, f, d;
    scanf("%d", &c);
    while (c--){
        scanf("%d", &n);
        t = -1, f = 100;
        while (n--){
            scanf("%d", &d);
            if (t < d) t = d;
            if (f > d) f = d;
        }
        printf("%d\n",(t-f)*2);
        
    }
}