#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int a,b;
    cout<<"Введите A и B"<<endl;
    cin>>a>>b;
    while (a!=b)
    {
        if (a>b)
        {
            while (a>b)
            {
                a-=b;
            }
        }
        else
        {
            while (b>a)
            {
                b-=a;
            }
        }
    }
    cout<<"НОД="<<a<<endl;
    return 0;
}
