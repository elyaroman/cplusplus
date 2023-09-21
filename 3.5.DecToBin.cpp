#include <iostream>
using namespace std;

void dec2bin(int n)
{
    if (n > 1)
        dec2bin(n / 2);
    cout << n % 2;
}

int main()
{
    int n;
    cin >> n;

    dec2bin(n);
}
