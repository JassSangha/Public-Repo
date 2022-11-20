#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    // complex();
    complex(int, int);
    void display()
    {
        cout << "your number is: " << a << " + " << b << "i"<<endl;
    }
    ~complex()//destructor
{
    cout<<"-----destructed-----"<<endl;
}
};
// complex::complex()//deafult constructor as it takes no parameters.
// {
//     a = 5;
//     b = 10;
// }

complex::complex(int x, int y)//paramterized constructor as it takes two parameters.
{
    a = x;
    b = y;
}

int main()
{
    // complex a;
    complex b(4,6);
    b.display();
    // a.display();
    return 0;
}