#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
    int n, i, t, x;
    
    cin >> n;
    i = 0;
    t = 0;
    x = 0;
    do{
        i++;
        t = i;
        x += t;
    } while (x < n);
    
    if (x < n){
        cout << t + 1 << endl;
        
    }
    else{
        cout << t << endl;
        cout << x << endl;
    }
    
    return 0;
    
}
