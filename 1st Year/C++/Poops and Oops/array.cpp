#include<iostream>
using namespace std;

class shop
{
    int itemid;
    int itemprice;
    public:
    void setid()
    {
        itemprice=100;
        int i;
        cout<<"enter id of "<<i+1<<" item: "<<endl;
        cin>>itemid;
        i++;
    }
    void getid()
    {
        cout<<"Item id: "<<itemid<<endl;
        cout<<"Item price: "<<itemprice<<endl;
    }
};
int main()
{
    shop a[100];
    int n;
    cout<<"enter number of items: "<<endl;
    cin>>n;    
    for (int i = 1; i <= n; i++)
    {
        a[i].setid();
    }
    cout<<endl;
    for (int i = 1;i <= n; i++)
    {
        a[i].getid();
    }
    return 0;
}    
