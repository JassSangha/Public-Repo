#include<iostream>
using namespace std;
int a=2-1;
int main() 
{
    int a=2;
     	{int a=3;
        	{int a=4;
	            cout<<"local a="<<a;
	            cout<<"\nglobal a="<<::a;
	        }
            cout<<"\nlocal a="<<a;
            cout<<"\nglobal a="<<::a;
        }
        cout<<"\nlocal a="<<a;
      	cout<<"\nglobal a="<<::a;
}
