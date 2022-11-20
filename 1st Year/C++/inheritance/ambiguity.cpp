#include <iostream>
using namespace std;
class a
{
public:
    void greet()
    {
        cout << "Sat shri akal ji"<<endl;
    }
};
class b
{
public:
    void greet()
    {
        cout << "namaste"<<endl;
    }
};
class c
{
public:
    void greet()
    {
        cout << "hello"<<endl;
    }
};
class d : public a, public b, public c
{
public:
    // void greet()
    // {
    //     cout << "hello"<<endl;
    // }
    void display()
    {
        a::greet();
    }
};
int main()
{
    d c1;
    c1.display();
    return 0;
}