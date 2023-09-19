#include <iostream>

using namespace std;

int main()
{
    int a, n = 0, np = 0, npp, nppp = 0;
    cin >> a;

    for (int k = 2; k < a; k++)
    {
        if ((a % k) == 0)
            np += 1;
    }

    if (np != 0)
        cout << "Not Prime";
    else
    {
        n = 0;
        for (int i = 2; i < a; i++)
        {
            npp = 0;
            for (int j = 2; j < i; j++)
            {
                if ((i % j) == 0)
                    npp += 1;
            }
            if (npp == 0) n++;
        }

        for (int k = 2; k < n + 1; k++)
        {
            if (((n + 1) % k) == 0)
                nppp += 1;
        }

        if ((nppp == 0) && (a != 2))
            cout << "Super-prime number";
        else
            cout << "Prime";
    }
}
