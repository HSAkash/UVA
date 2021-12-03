#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int tp, n, m, x, y;
    while(scanf("%d", &tp), tp!=0){
        scanf("%d%d", &n, &m);
        while(tp--){
            scanf("%d%d", &x, &y);
            if (x==n || y==m)printf("divisa\n");
            else if (x > n && y > m)printf("NE\n");
            else if (x > n && y < m)printf("SE\n"); 
            else if (x < n && y > m)printf("NO\n"); 
            else printf("SO\n");
        }
    }
}