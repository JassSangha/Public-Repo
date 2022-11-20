#include<iostream>
using namespace std;
class base1{
    protected:
    base1(){
        cout<<"base 1 constructor"<<endl;
    }
};
class base2{
    protected:
    base2(){
        cout<<"base 2 constructor"<<endl;
    }
};
class derived:public base1,public base2{
    public:
    derived(){
        cout<<"derived constructor"<<endl;
    }
}c;

int main()
{
    c;
    return 0;
}