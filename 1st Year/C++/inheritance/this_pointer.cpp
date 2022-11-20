#include<iostream>
using namespace std;
class age
{
    public:
    int age;
    void setdata(int x)
    {
        age=x;
    }
    void getdata()
    {
        cout<<"rahul's age is: "<<age<<endl;
    }
};
int main()
{
    age c;
    int age;
    cout<<"enter rahul's age: ";
    cin>>age;
    c.setdata(age);
    c.getdata();
    return 0;
}