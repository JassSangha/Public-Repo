#include<iostream>
using namespace std;
//-----------(Array Pointer Formula) New Address = Current Address + i * sizeof(Datatype)-----------
int main()
{
    int a[5]={10,20,30,40,50};
    // cout<<a[0]<<endl<<a[1]<<endl<<a[2]<<endl<<a[3]<<endl<<a[4]<<endl;

    // int a[5];
    // a[0]=10,a[1]=20,a[2]=30,a[3]=40,a[4]=50;
    // cout<<a[0]<<endl<<a[1]<<endl<<a[2]<<endl<<a[3]<<endl<<a[4]<<endl;
    
    // int a[5],i=0;
    // for (i = 0; i < 5; i++)
    // {
    //     cout<<"enter "<<i<<" number: ";
    //     cin>>a[i];
    // }
    // for (i = 0; i < 5; i++)
    // {
    //     cout<<i<<" number: "<<a[i]<<endl;
    // }
    int* p=a;
    cout<<*p++<<endl;
    cout<<*p++<<endl;
    cout<<*p<<endl;
    cout<<*++p<<endl;
    cout<<*++p<<endl;


    return 0;
}