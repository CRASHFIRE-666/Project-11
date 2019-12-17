#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int i,n,sum;
    cout<<"Введите N"<<endl;
    cin>>n;
    i=1;
    sum=0;
    while (sum<n)
    {
        sum+=i;
        i++;
    }
    cout<<"K="<<i-1<<", Сумма="<<sum<<endl;
    return 0;
}
