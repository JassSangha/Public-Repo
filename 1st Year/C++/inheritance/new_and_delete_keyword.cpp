#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int *ptr = &a;
    cout << "the address and the value of A: " << ptr << "\t" << *ptr << endl;

    float *p = new float(40.50);
    cout << "the address and the value of P: " << p << "\t" << *p << endl;

    int *arr = new int[10];
    for (int i = 0; i < 3; i++)
    {
        cout<<i<<" value: ";
        cin >> arr[i];
    }
    cout << "arr: " << arr[0] << "\t" << arr[1] << "\t" << arr[2]<<endl;
    return 0;
}
