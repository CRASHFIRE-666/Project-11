#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
    int a, b, i;
    
    cin >> a >> b;
    
    if (a > 0 && b > 0 && a < b){
        
        while (a <= b){
            for (i = 1; i <= a; i++){
                cout << a;
            }
            a++;
            cout << endl;
        }
    }
    return 0;
    
}
