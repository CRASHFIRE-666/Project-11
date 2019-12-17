#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int i;
    float p,sum;
    cout<<"Введите P"<<endl;
    cin>>p;
    i=0;
    p=1+p/100;
    sum=1000;
    while (sum<1100)
    {
        sum*=p;
        i++;
    }
    cout<<"K="<<i<<", Сумма="<<sum<<endl;
    return 0;
}
