#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int num, k, dig1, dig2, dig3;
    cin >> num;
    cin >> k;
    bool flag = true;

    for (int i = 0; i <= 6; i++)
    {
        dig1 = int(pow(10, 8-i));
        dig2 = int(pow(10, 8-(i+1)));
        dig3 = int(pow(10, 8-(i+2)));
        if (((int(num / dig1) % 10) == (int(num / dig2) % 10)) && ((int(num / dig2) % 10) == (int(num / dig3) % 10)))
        {
            flag = false;
            break;
        }
        // cout << int(num / dig3) % 10 << " " << int(num / dig2) % 10 << " " << int(num / dig1) % 10 << endl;
    }

    int numc = num;
    int sum = 0;

    for (int i = 0; i <= 8; i++)
    {
        sum += (numc % 10) * (i + 1);
        cout << sum << endl;
        numc = int(numc / 10);
    }

    int kr;

    if (sum < 100)
        kr = sum;
    else if ((sum == 100) || (sum == 101))
        kr = 00;
    else if (sum > 101)
    {
        int rem = int(sum % 101);
        if (rem < 100)
            kr = rem;
        else
            kr = 00;
    }

    // cout << k << " " << kr << endl;

    if (k != kr)
        flag = false;

    if (flag == false)
        cout << "Invalid";
    else
        cout << "Valid";
}
