#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"enter two numbers: ";
    cin>>num1>>num2;
    char op;
    cout<<"enter operator: ";
    cin>>op;
    switch (op)
    {
    case '+':
        cout<<num1<<"+"<<num2<<": "<<num1+num2<<endl;
        break;
    case '-':
        cout<<num1<<"-"<<num2<<": "<<num1-num2<<endl;
        break;
    case '*':
        cout<<num1<<"*"<<num2<<": "<<num1*num2<<endl;
        break;
    case '/':
        cout<<num1<<"/"<<num2<<": "<<num1/num2<<endl;
        break;
    case '%':
        cout<<num1<<"%"<<num2<<": "<<num1%num2<<endl;
        break;
    default:
        cout<<"Values sahi bhar dangar";
        break;
    }
}