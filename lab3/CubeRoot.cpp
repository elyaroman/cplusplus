#include <iostream>
#include <cmath>
using namespace std;

double cuberoot(int a, double curoot)
{
    curoot = 1.0 / 3 * (a / (curoot * curoot) + 2 * curoot);
    cout << curoot << endl;
    return curoot;
}

int main()
{
    int i;
    double a;
    cin >> a;
    double curoot = a;
    cin >> i;
    
    cout << "first option -" << pow(a, 1.0 / 3) << endl;

    for (int k = 1; k < i; k++)
    {
        curoot = cuberoot(a, curoot);
    }

    cout << "second option -" << curoot << endl;
}
