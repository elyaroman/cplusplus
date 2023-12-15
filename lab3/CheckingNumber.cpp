#include <iostream>
#include <string>

using namespace std;

bool checking(string number, string k)
{
    int check, dig, kn, num = 0;
    bool flag = true;

    for (int i = 0; i < number.length(); i++)
    {
        check = isdigit(number[i]);
        if ((check) && (i != 3) && (i != 7))
        {
            dig = number[i] - '0';
            num = num * 10 + dig;
        }
        else if ((number[i] == '-') && ((i == 3) || (i == 7)))
            continue;
        else
        {
            return false;
        }
    }

    if ((isdigit(k[1])) && (isdigit(k[0])))
        kn = (k[0] - '0') * 10 + (k[1] - '0');
    else
        return false;

    int dig1, dig2, dig3;

    for (int i = 0; i <= 6; i++)
    {
        dig1 = int(pow(10, 8 - i));
        dig2 = int(pow(10, 8 - (i + 1)));
        dig3 = int(pow(10, 8 - (i + 2)));
        if (((int(num / dig1) % 10) == (int(num / dig2) % 10)) && ((int(num / dig2) % 10) == (int(num / dig3) % 10)))
            return false;
    }

    int numc = num;
    int sum = 0;

    for (int i = 0; i <= 8; i++)
    {
        sum += (numc % 10) * (8 - i);
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

    if (kn != kr)
        flag = false;

    return true;
}

int main()
{
    string number, k;
    cin >> number;
    cin >> k;

    bool flag = checking(number, k);
    cout << flag;
}
