#include <iostream>
using namespace std;
class student
{
protected://protected class is similar to a private class, except it can be inherited unlike the private class.
    string name;
    int roll_no;
    public:
    void read();
    void display();
};
class newstudent : public student
{
public:
    float height = 160;
    float weight = 70;
    void display();
};
void student::read()
{
    static int i;
    cout << "enter the name and roll_no of "<<i+1<<" student: ";
    cin >> name>>roll_no;
    i++;
}
void student::display()
{
    cout << "name: " << name
         << "\troll_no: " << roll_no << endl;
}
void newstudent::display()
{
    cout << "name: " << name
         << "\troll_no: " << roll_no
         << "\theight: " << height
         << "\tweight: " << weight << endl;
}
int main()
{
    student jassa;
    jassa.read();
    jassa.display();
    newstudent rana;
    rana.read();
    rana.display();
    return 0;
}