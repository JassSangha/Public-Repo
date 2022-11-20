#include <iostream>
#include <math.h>
using namespace std;
class points
{
    int x, y;

public:
    points(int a, int b)
    {
        x = a;
        y = b;
    }
    void display()
    {
        static int i;
        cout << "the " << i + 1 << " points are: (" << x << " , " << y << ")" << endl;
        i++;
    }
    friend void distance(points o1, points o2);
};
void distance(points o1, points o2)
{
    int x_diff = o2.x - o1.x;
    int y_diff = o2.y - o1.y;
    int dist = sqrt((x_diff) * (x_diff) + (y_diff) * (y_diff));
    cout << "Distance between these points are: " << dist << endl;
}
int main()
{
    points c1(1, 0), c2(70, 0);
    c1.display();
    c2.display();
    distance(c1, c2);
    return 0;
}