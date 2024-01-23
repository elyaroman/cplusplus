#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	double const PI = 3.141592653589793;
	double x, x1, x2, y;

	cout << "variant\tx\tsin(x)\n";

	// 1 вариант

	x1 = 0;
	x2 = PI;
	x = x1;

	while (x <= x2)
	{
		y = sin(x);
		cout << "1\t" << x << "\t" << y << endl;
		x += PI / 4;
	}
	cout << endl;
	// 2 вариант

	x1 = 0;
	x2 = 2 * PI;
	x = x1;

	do
	{
		y = sin(x);
		cout << "2\t" << x << "\t" << y << endl;
		x += PI / 2;
	} while (x <= x2);
	cout << endl;
	// 3 вариант

	x1 = 0;
	x2 = 10;
	x = x1;

	while (x <= x2)
	{
		y = x * x * x;
		cout << "3\t" << x << "\t" << y << endl;
		x += 2;
	}
	cout << endl;
	// 4 вариант

	x1 = 10;
	x2 = 12;
	x = x1;

	do
	{
		y = x * x * x;
		cout << "4\t" << x << "\t" << y << endl;
		x += 0.5;
	} while (x <= x2);

	return 0;
}