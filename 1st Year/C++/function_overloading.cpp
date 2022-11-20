#include<iostream>
using namespace std;

float volume(float r)//circle
{
    return (3.14*r*r);
}
float volume(float r,float h)//cylinder
{
    return (3.14*r*r*h);
}
float volume(float l,float b,float h)//rectangle
{
    return (l*b*h);
}
int main()
{
    cout<<"volume of circle with radius 5 is: "<<volume(5)<<endl;
    cout<<"volume of cylinder is: "<<volume(3,6)<<endl;
    cout<<"volume of rectangle is: "<<volume(5,4,3)<<endl;
    return 0; 
}