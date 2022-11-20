#include <iostream>
#include <math.h>
using namespace std;
class simple_calculator
{
protected:
    char o;
    int a, b;

public:
    void set(int x)
    {
        o = x;
    }
    void get()
    {
        switch (o)
        {
        case '+':
            cout << "enter two numbers: ";
            cin >> a >> b;
            cout << "result: " << a + b << endl;
            break;
        case '-':
            cout << "enter two numbers: ";
            cin >> a >> b;
            cout << "result: " << a - b << endl;
            break;
        case '*':
            cout << "enter two numbers: ";
            cin >> a >> b;
            cout << "result: " << a * b << endl;
            break;
        case '/':
            cout << "enter two numbers: ";
            cin >> a >> b;
            cout << "result: " << a / b << endl;
            break;
        }
    }
}c1;
class scientific_calculator
{
protected:
    int a;
    char o;

public:
    void set(int x)
    {
        o = x;
    }
    void get()
    {
        switch (o)
        {
        case 's':
            cout << "enter the number for calculating sin: ";
            cin >> a;
            cout << "result: " << sin(a) << endl;
            break;
        case 'c':
            cout << "enter the number for calculating cos: ";
            cin >> a;
            cout << "result: " << cos(a) << endl;
            break;
        case 't':
            cout << "enter the number for calculating tan: ";
            cin >> a;
            cout << "result: " << tan(a) << endl;
            break;
        case 'l':
            cout << "enter the number for calculating log: ";
            cin >> a;
            cout << "result: " << log(a) << endl;
            break;
        }
    }
}c2;
class hybrid_calculator : public simple_calculator, public scientific_calculator
{
public:
    void set()
    {
        char o;
        cout << "enter the operator: (+)  (-)  (*)  (/)  (s)for sin  (c)for cos  (t)for tan  (l)for log: ";
        cin >> o;
        c1.set(o);
        c2.set(o);
        c1.get();
        c2.get();
    }
}c3;
int main()
{
    // char o;  //simple calculator
    // cout << "enter the operator: (+)  (-)  (*)  (/): ";
    // cin >> o;
    // c1.set(o);
    // c1.get();
    // cout << "enter the operator: (s)for sin  (c)for cos  (t)for tan  (l)for log: ";  //scientific calculator
    // cin >> o;
    // c2.set(o);
    // c2.get();
    
    c3.set();
    return 0;
}