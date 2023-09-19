#include <iostream>

using namespace std;

int main()
{
    int money, ten = 0, five = 0, two = 0, one = 0;
    cin >> money;
    while (money > 0)
    {
        while (money - 10 >= 0)
        {
            money -= 10;
            ten += 1;
        }

        while (money - 5 >= 0)
        {
            money -= 5;
            five += 1;
        }

        while (money - 2 >= 0)
        {
            money -= 2;
            two += 1;
        }

        while (money - 1 >= 0)
        {
            money -= 1;
            one += 1;
        }
    }

    cout << "ten roubles coin: " << ten << "\nfive roubles coin: " << five << endl;
    cout << "two roubles coin: " << two << "\nten roubles coin: " << one;
}

