#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
    
    int a, b, i;
    
    cin >> a >> b;
    if (a > b){
        while ((a - b) >= 0){
            i = a - b;
            a = a - b;
        }
        cout << i << endl;
    }
    else{
        cout << "NEPRAVILNIE ZNACHENYA" << endl;
    }
    
    return 0;
    
}
