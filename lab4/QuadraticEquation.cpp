#include <iostream>
using namespace std;

int Myroot(double a, double b, double c, double &x1, double &x2)
{
    double d = b * b - 4 * a * c;
    if (d < 0)
        return -1;
    else
    {
        x1 = x1 + (-b + pow(d, 1.0 / 2)) / (2 * a);
        x2 = x2 + (-b + pow(b * b + 4 * a * c, 1.0 / 2)) / (2 * a);
        return 1;
    }
}

int main()
{
    double a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;

    double xf = 0, xs = 0;
    int result = Myroot(a, b, c, xf, xs);

    if (result == 1)
        cout << "x1 = " << xf << " and x2 = " << xs;
    else
        cout << "no roots";

    return 0;
}
