#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    ifstream a("file.txt",ios::in); //reading a file using ifstream
    string b;
    cout << "reading a file:" << endl;
    while (a.eof()==0)
    {
        getline(a,b);
        cout<<b<<endl;
    }

    ofstream x("file.txt"); //writing a file using ofstream
    string s = "c++\npoops and oops\ninheritance\nfiles";
    x << s;
    return 0;
}