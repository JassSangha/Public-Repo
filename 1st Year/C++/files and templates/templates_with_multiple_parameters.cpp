#include <iostream>
using namespace std;
template <class T, class T1>
class calc
{
public:
    int product(T x, T1 y)
    {
        cout << "the product of given numbers is: " << x * y << endl;
        return x * y;
    }
};
int main()
{
    calc<int, float> c;
    c.product(5, 4.76);
    return 0;
}