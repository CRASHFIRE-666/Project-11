#include <iostream>
using namespace std;
int main()
{
    int k;
    double c, p;
    
    cin >> p;
    c = 1000;
    k = 0;
    if (p > 0 && p < 25){
        do{
            k++;
            c *= 1 + p / 100;
        } while (c <= 1100);
        cout << k << endl;
        cout << c << endl;
    }
    else{
        cout << "NEPRAVILNYE ZNACHENYA" << endl;
    }
    
    return 0;
    
}
