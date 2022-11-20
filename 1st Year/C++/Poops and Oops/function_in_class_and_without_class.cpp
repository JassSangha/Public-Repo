#include <iostream>
using namespace std;

// void get()
// {
//     int n,i;
//     cout<<"enter the "<<i+1<<" number: ";
//     cin>>n;
//     i++;
// }

class shop
{
    string s;
    
public:
    void get()
    {
        static int i;
        cout << "enter the name of " << i + 1 << " employee: " << endl;
        cin >> s;
        i++;
    }
    void put()
    {
        static int j;
        cout << "the name of " << j + 1 << " employee is: " << s << endl;
        j++;
    }
};

int main()
{
    // for (int i=0 ; i<2 ; i++)
    // {
    //     get();
    // }

    shop a[10];
    for (int i = 0; i < 2; i++)
    {
        a[i].get();
    }
    for (int i = 0; i < 2; i++)
    {
        a[i].put();
    }
    return 0;
}