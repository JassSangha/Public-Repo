#include<iostream>
 using namespace std;

// -----> (call by value )
int product(int a,int b=10)
{
    return a*b;
}
int main()
{
    int n=10;
    cout<<"product: "<<product(n)<<endl;
    cout<<"product: "<<product(n,20)<<endl;
    return 0;
}

//-----> (call by address)
// void swap(int* a,int* b)
// {
//     *a=*a+*b;
//     *b=*a-*b;
//     *a=*a-*b;
// }
// int main()
// {
//     int a=10,b=20;
//     cout<<"values before swapping:\na: "<<a<<"\tb: "<<a<<endl;
//     swap(a,b);
//     cout<<"values after swapping:\na: "<<a<<"\tb: "<<b<<endl;
//     return 0;
// }

//-----> (call by reference)(c++ only)
// void swap(int &a,int &b)
// {
//     a=a+b;
//     b=a-b;
//     a=a-b;
// }
// int main()
// {
//     int a=10,b=20;
//     cout<<"values before swapping:\na: "<<a<<"\tb: "<<a<<endl;
//     swap(a,b);
//     cout<<"values after swapping:\na: "<<a<<"\tb: "<<b<<endl;
//     return 0;
// }
