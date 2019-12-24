#include <iostream>
#include <cmath>
using namespace std;

int findIndex(int n){
    int a = 1, b = 1, c = 2;
    int res = 2;
    
    while (c < n){
        c = a + b;
        res++;
        a = b;
        b = c;
    }
    if (c > n){
    return 0;
    }
    else{
        return res;
    }
}



int main()
{
    setlocale(LC_ALL, "Russian");
    int n;
    cin >> n;
    if (n > 1){
        if (n == 2){
            cout << 3 << endl;
        }
        else{
            int result = findIndex(n);
            if(result != 0){
                cout << result << endl;
            }
            else{
                cout << "НЕПРАВИЛЬНОЕ ЗНАЧЕНИЕ" << endl;
            }
        }
    }
    else{
        cout << "НЕПРАВИЛЬНОЕ ЗНАЧЕНИЕ" << endl;
    }
    return 0;
}
