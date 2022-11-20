#include <iostream> //average speed formula
using namespace std;
class top
{
public:
    int d;
    int getd()
    {
        cout << "distance travelled in (Km's): ";
        cin >> d;
    }
};
class middle : public top
{
    public:
    int t;
    int gett()
    {
        // getd();
        cout << "time taken to cover the distance in (Hours): ";
        cin >> t;
    }
};
class bottom : public middle
{
    public:
    int gets()
    {
        gett();
        int s;
        s = d / t;
        cout << "the average speed in(Km/h) is: " << s <<endl;
    }
};
int main()
{
    bottom c1;
    c1.gets();
    return 0;
}