#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream x;
    x.open("file.txt");//connecting the file
    cout << "enter your name: ";
    string a;
    cin >> a;
    x << "my name is "<<a;
    x.close();//disconnecting the file
    ifstream y;
    y.open("file.txt");
    string b;
    y>>b;
    cout<<"reading a file:"<<endl<<a<<endl;
    return 0;
}