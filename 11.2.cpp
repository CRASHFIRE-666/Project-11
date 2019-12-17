#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int a,b;
    cout<<"Введите A и B"<<endl;
    cin>>a>>b;
    while (a>=0)
    {
        a=a-b;
    }
    cout<<"Длина="<<a+b<<endl;
    return 0;
}
