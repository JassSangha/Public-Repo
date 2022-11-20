#include <iostream>
using namespace std;
class test
{
protected:
    int a;
    string b;

public:
    void setname_rollno(string x, int y)
    {
        b = x, a = y;
    }
} c1;
class theory : virtual public test
{
protected:
    int c, d;

public:
    void settheory(int x, int y)
    {
        c = x, d = y;
    }
} c2;
class practical : virtual public test
{
protected:
    int e, f;

public:
    void setpractical(int x, int y)
    {
        e = x, f = y;
    }
} c3;
class result : public theory, public practical
{
public:
    void printresult()
    {
        cout << "name and roll_no of the student is: " << b << "\t" << a << endl;
        cout << "theory number: " << c + d << endl;
        cout << "practical number: " << e + f << endl;
        cout << "total number: " << c + d + e + f << endl;
        if (c + d + e + f >= 100)
        {
            cout << "result: pass" << endl;
        }
        else
        {
            cout << "result: fail" << endl;
        }
    }
} c4;
int main()
{
    c4.setname_rollno("jassa", 3151);
    c4.settheory(20, 10);
    c4.setpractical(30, 25);
    c4.printresult();
    return 0;
}