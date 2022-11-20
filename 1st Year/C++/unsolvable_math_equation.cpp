#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"enter any number:";
	cin>>a;
	for(int i=0;i<=5;i++)
	{
		if (a%2!=0)
		{
			int b=a;
			a=3*a+1;
			cout<<"3*"<<b<<"(odd)+1: "<<a<<endl;
		}
		else
		{
			int b=a;
			a=a/2;
			cout<<b<<"(even)/2 : "<<a<<endl;

		}
	}
}