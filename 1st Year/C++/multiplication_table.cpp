#include <iostream>
using namespace std;
int main()
{
    int a, i = 1;
    cout << "enter a number: ";
    cin >> a;
    // for (i; i <=10; i++)
    // {
    //     cout<<a<<" * "<<i<<" = "<<a*i<<endl;
    // }
    // while (i<=10)
    // {
    //     cout<<a<<" * "<<i<<" = "<<a*i<<endl;
    //     i++;
    //}
    do
    {
        cout << a << " * " << i << " = " << a * i << endl;
        i++;
    } while (i <= 10);
}
