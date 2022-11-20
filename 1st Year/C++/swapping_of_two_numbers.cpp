#include<iostream>
using namespace std;
int main(){
    int a,b;
	cout<<"enter values of a and b=";
	cin>>a>>b;
	cout<<"\nthe values before swapping\na="<<a<<"\nb="<<b;
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"\nthe values after swapping\na="<<a<<"\nb="<<b;
	return 0;
}