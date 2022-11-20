#include<iostream>
using namespace std;

// int fact(int a)//factorial 
// {
//     if(a<=1){
//         return 1;
//     }
//     else{
//         return a*fact(a-1);
//         ;
//     }
// }
// int main()
// {
//     int n;
//     cout<<"enter a number: ";
//     cin>>n;
//     cout<<"factorial of "<<n<<" is: "<<fact(n)<<endl; 
//     return 0;
// }

int fib(int a)//fibonacci series
{
    if (a<=2){
        return 1;
    }
    else{
        return fib(a-2) + fib(a-1);
    }
}
int main()
{
    int n;
    cout<<"enter a number: ";
    cin>>n;
    cout<<"the fibonacci sequence at "<<n<<" is: "<<fib(n)<<endl;
    return 0;
}