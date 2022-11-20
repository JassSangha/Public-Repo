#include <iostream>
using namespace std;
struct complex
{
    int a, b;
};
int main()
{
    complex n, n1, sum;
    cout << "enter two numbers for first set of complex numbers: ";
    cin >> n.a >> n.b;
    cout << "enter two numbers for second set of complex numbers: ";
    cin >> n1.a >> n1.b;
    sum.a = n.a + n1.a;
    sum.b = n.b + n1.b;
    if (sum.b >= 0)
    {
        cout << "sum of two given complex number is: " << sum.a << " + " << sum.b<<"i"<<endl;
    }
    else
    {
        cout << "sum of two given complex number is: " << sum.a << " - " << sum.b<<"i"<<endl;
    }
    return 0;
}