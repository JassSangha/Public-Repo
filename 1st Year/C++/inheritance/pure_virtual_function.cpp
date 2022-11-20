#include<iostream>
using namespace std;
class base
{
protected:
int a;
public:
virtual void print()=0;//pure virtual function
};
class base1
{
protected:
int a;
public:
void print(){
    cout<<"base1 called"<<endl;
}
};
int main()
{
    base1 c;
    c.print();
    return 0;
}       