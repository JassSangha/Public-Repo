#include<iostream>
using namespace std;

int main()
{
    int a=5;
    int* b;
    cout<<"address of a: "<<&a<<endl;
    cout<<"Value at b: "<<*b<<endl; 
   
    int** c=&b;
    cout<<"address of b: "<<&b;
    cout<<"value at c: "<<*c;
    cout<<"value at b through c: "<<**c;
    return 0;
} 