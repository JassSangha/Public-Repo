#include<iostream>
using namespace std;
class base
{
protected:
int a;
public:
virtual void print(){
    cout<<"base class called"<<endl;
}
};
class derived:public base
{
protected:
int a;
public:
void print(){
    cout<<"derived class called"<<endl;
}
};
int main()
{
    base c,*ptr;
    derived c1;
    ptr=&c;
    ptr->print();
    ptr=&c1;
    ptr->print();
    return 0;
}       