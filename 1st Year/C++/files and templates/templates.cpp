#include <iostream>
using namespace std;
template <class T>
class calc
{
public:
    product(T x, T y)
    {
        cout << "the product of given numbers is: " << x * y << endl;
        return x * y;
    }
};
int main()
{
    calc<int> c;
    calc<float> c1;
    calc<char> c2;
    c.product(5, 5);
    c1.product(5.8, 4.2);
    c2.product('j', 's');
    return 0;
}