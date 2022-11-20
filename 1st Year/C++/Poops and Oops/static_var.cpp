#include<iostream>
using namespace std;

class shop
{
    int itemid;
    int itemprice;
    static int count;
    public:
    void setid()
    {
        cout<<"enter id of "<<count+1<<" item"<<endl;
        cin>>itemid;
    }
    void setprice()
    {
        cout<<"enter price of "<<count+1<<" item"<<endl;
        cin>>itemprice;
        count++;
    }
    void display()
    {
        cout<<"Item id: "<<itemid<<endl;;
        cout<<"Item price: "<<itemprice<<endl;
    }
};
int shop::count;
int main()
{
    shop a,b,c;
    a.setid();
    a.setprice();
  
    b.setid();
    b.setprice();
  
    c.setid();
    c.setprice();

    a.display();
    b.display();
    c.display();
    return 0;
}    
