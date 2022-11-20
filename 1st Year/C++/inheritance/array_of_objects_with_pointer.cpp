#include <iostream>
using namespace std;
class person
{
public:
    string a;
    void setdata(string x)
    {
        a = x;
    }
    void getdata()
    {
        static int i;
        cout << "name of the " << i + 1 << " person : " << a << endl;
        i++;
    }
};
int main()
{
    int size = 2;
    person *ptr = new person[size];
    person *ptrtemp = ptr;
    string a;
    for (int i = 0; i < size; i++)
    {
        cout << "enter the name of the " << i + 1 << " person: ";
        cin >> a;
        ptr->setdata(a);
        ptr++;
    }
    for (int i = 0; i < size; i++)
    {
        ptrtemp->getdata();
        ptrtemp++;
    }

    return 0;
}