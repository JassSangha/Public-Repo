#include<iostream>
#include<vector>
using namespace std;
int main()
{   
    vector<int>a;
    int n;
    for (int  i = 0; i < 4; i++)
    {
        cout<<"enter "<<i+1<<" element: ";
        cin>>n;
        a.push_back(n);
    }
    for (int i = 0; i < 4; i++)
    {
        cout<<a[i];
    }
    cout<<endl;
    return 0;
}