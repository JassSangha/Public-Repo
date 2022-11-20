#include<iostream>
using namespace std;
int fact(int n)
{
    int b=1;
    for (int i = 1; i <= n; i++)
    b=b*i;
    return b;
}
int main()
{
    int n,f=1,i=1;
    cout<<"enter the number: ";
    cin>>n;
    f=fact(n);
    cout<<"factorial of "<<n<<" is: "<<f<<endl;
    return 0;
}
