#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x1, x2, x3, x4, x5;
    int y1, y2, y3, y4, y5;

    cin >> x1;
    cin >> x2;
    cin >> x3;
    cin >> x4;
    cin >> x5;
    cin >> y1;
    cin >> y2;
    cin >> y3;
    cin >> y4;
    cin >> y5;

    double s = 0.5 * (x1 * y2 + x2 * y3 + x3 * y4 + x4 * y5 + x5 * y1 - y1 * x2 - y2 * x3 - y3 * x4 - y4 * x5 - y5 * x1);

    cout << "s = " << abs(s);

    // -1 - 2 1 3 1 - 1 2 4 0 - 1
    // s = 15.5
}
