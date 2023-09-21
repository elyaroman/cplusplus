#include <iostream>
#include <cmath>
using namespace std;

double square(double a)
{
    double s = a * a * double(pow(3.0, 1.0 / 2)) / 4;
    return s;
}

double square(double a, double b, double c)
{
    double p = double((a + b + c) / 2);
    double s = double(pow(p * ((p - a) * (p - b) * (p - c)), 1.0 / 2));
    return s;
}

int main()
{
    cout << "equilateral or versatile?" << endl;
    string triangle;
    cin >> triangle;
    double a;

    if (triangle == "versatile")
    {
        double b, c;
        cin >> a;
        cin >> b;
        cin >> c;

        cout << square(a, b, c);
    }
    else if (triangle == "equilateral")
    {
        cin >> a;

        cout << square(a);
    }
}
