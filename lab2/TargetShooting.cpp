#include <iostream>

using namespace std;

int main()
{
    int x, y, epoints, points = 0, shoots = 0;
    cin >> epoints;

    while (points < epoints)
    {
        cin >> x;
        cin >> y;
        if (x * x + y * y <= 1)
        {
            points += 10;
            shoots += 1;
            cout << 10 << " points" << endl;
        }
        else if (x * x + y * y <= 4)
        {
            points += 5;
            shoots += 1;
            cout << 5 << " points" << endl;
        }
        else
        {
            points += 0;
            shoots += 1;
            cout << 0 << " points" << endl;
        }
    }

    if (shoots == 5)
        cout << "you're an Expert.\n";
    else if (shoots <= 10)
        cout << "you're an Amateur.\n";
    else
        cout << "you're an Novice.\n";

    cout << shoots << " shoots were made.";
}

