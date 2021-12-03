#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    
    for (int i = 1; i <= t; i++)
    {
        double c, f;
        
        cin >> c >> f;
        
        c = c + 5.0 / 9.0 * f;
        
        printf("Case %d: %.2f\n", i, c);
    }
}