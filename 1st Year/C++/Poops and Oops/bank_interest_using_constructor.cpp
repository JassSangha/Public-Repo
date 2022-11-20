#include <iostream>
#include <math.h>
using namespace std;
class interest
{
    int p, r, t, result;

public:
    interest(int x, int y, int z);
    void display()
    {
        cout << "the amount " << p << " after " << r << "% interest for " << t << " years: " << result << endl;
    }
};
interest::interest(int x, int y, int z)
{
    p = x;
    r = y;
    t = z;
    result = p;
    // result += x*float(y)*z/100;//simple interest
    result=x*pow((1+float(y)/100),z);//compound interest 
}
int main()
{
    int p, r, t;
    cout << "enter principle amount, rate, years: ";
    cin >> p >> r >> t;
    interest c(p, r, t);
    c.display();
    return 0;
}