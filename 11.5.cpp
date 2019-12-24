#include <iostream>
#include <cmath>
using namespace std;

int gcd(int a, int b)
{
    while(true)
    {
        a = a % b;
        if(a == 0)
        {
            return b;
        }
        b = b % a;
        if(b == 0)
        {
            return a;
        }
    }
}

int main()
{
    int a, b;
    
    cin >> a >> b;
    
    cout << gcd(a, b);
    
    return 0;
    
}
