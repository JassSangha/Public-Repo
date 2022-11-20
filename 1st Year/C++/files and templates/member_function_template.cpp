#include <iostream>
#include <math.h>
using namespace std;
template <class T>
class interest
{
    T p, r, t, result;
public:
    void setdata(T x, T y, T z);
    void display();
};
template <class T>
void interest<T>::setdata(T x, T y, T z)
{
    p = x;
    r = y;
    t = z;
    result = p;
    result += x*float(y)*z/100;//simple interest
}
template <class T>
void interest<T>::display()
    {
        cout << "the amount " << p << " after " << r << "% interest for " << t << " years: " << result << endl;
    }
int main()
{
    interest<int> c;
    c.setdata(100,10,1);
    c.display();
    return 0;
}