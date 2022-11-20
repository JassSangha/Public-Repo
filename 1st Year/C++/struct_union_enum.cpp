#include<iostream>
using namespace std;

struct student                                    
{
    string full_name[20];
};
int main()
{
    struct student jassa;
    jassa.full_name[20]="Jaskaran Singh";
    cout<<"name: "<<jassa.full_name[20]<<endl;
}

//  union currency 
// {
//     float rupees;
//     // or
//     float pounds;
//     // or
//     float dollars;
// };
// int main()
// {
//     union currency c1;
//     c1.rupees=500;
//     cout<<c1.rupees<<endl;
// }

// enum month{jan,feb,mar,apr,may,jun,jul,aug,sep,oct,nov,dec};
// int main()
// {
//     cout<<jan<<endl;
// }