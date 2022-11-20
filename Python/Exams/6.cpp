#include<iostream>

using namespace std;

int main()

{

int arr[10][5];

for(int i=0;i<10; i++)

{

cout<<"Enter Marks of student "<<i+1<<": "; for(int j=0;j<5;j++)

{

cin>>arr[i][j];

}

cout<<endl;

}

return 0;

}