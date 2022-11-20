#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream a("file.txt"); //reading a file using ifstream
    string b;
    getline(a, b);
    cout << "reading a file:" << endl
         << b << endl;
    getline(a, b);
    cout << b << endl;
    getline(a, b);

    ofstream x("file.txt"); //writing a file using ofstream
    string s = "c++\npoops and oops\ninheritance\nfiles";
    x << s;
    return 0;
}