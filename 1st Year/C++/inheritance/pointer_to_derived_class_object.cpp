#include <iostream>
using namespace std;
class base
{
protected:
    int a;

public:
    void print()
    {
        cout << "base class called" << endl;
    }
};
class derived : public base
{
protected:
    int a;

public:
    void print()
    {
        cout << "derived class called" << endl;
    }
};
int main()
{
    base c;
    derived c1;
    base *ptr;
    ptr = &c;
    // (*ptr).print();
    ptr->print();
    ptr = &c1;
    ptr->print(); //still runs the base class
    return 0;
}