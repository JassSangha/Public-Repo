#include<iostream>
using namespace std;
class base1{
    private:
    int a;
    protected:
    base1(int x){
        a=x;
        cout<<"Base1 constructor called\tA: "<<a<<endl;
    }
};
class base2{
    protected:
    int b;
    base2(int x){
        b=x;
        cout<<"Base2 constructor called\tB: "<<b<<endl;
    }
};
class derived:public base2,public base1
{
    public:
    int a,b;
    // derived(int x,int y):base1(50),base2(30)
    derived(int x,int y):base1(x),base2(y)
    {
        a=x,b=y;
        cout<<"derived class called\t\tA: "<<a<<"\tB: "<<b<<endl;
    }
}c(10,20);
int main()
{
    return 0;
}