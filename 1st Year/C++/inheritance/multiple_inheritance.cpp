#include <iostream>
using namespace std;
class father
{
protected:
    int a;

public:
    void seta(int x)
    {
        a = x;
    }
};
class mother
{
protected:
    int b;

public:
    void setb(int x)
    {
        b = x;
    }
};
class child : public father, public mother
{
public:
    void getc()
    {
        cout << "child is a combination of mother("<<a<<") and father("<<b<<"): " << a + b << endl;
    }
};
int main()
{
    child c;
    c.seta(5);
    c.setb(10);
    c.getc();
    return 0;
}