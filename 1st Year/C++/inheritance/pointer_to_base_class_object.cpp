#include <iostream>
using namespace std;
class base
{
protected:
    int a;

public:
    void setdata(int x)
    {
        a = x;
        cout << "A: " << a << endl;
    }
};
int main()
{
    base c;
    base *ptr = &c;
    // (*ptr).setdata(10);
    ptr->setdata(20);

    return 0;
}