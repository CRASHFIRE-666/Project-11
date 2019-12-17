#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int n,k;
    int i=2;
    cout<<"Введите число"<<endl;
    cin>>n;
    int a=0;
    int b=1;
    while (b!=n)
    {
        k=b;
        b=a+b;
        a=k;
        i++;
    }
    cout<<"К="<<i-1<<endl;

}
