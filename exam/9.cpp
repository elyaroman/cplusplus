#include <iostream>
using namespace std;

int scenemode(int a, int b)
{
	while (a != b)
	{
		if (a > b)
			a -= b;
		else
			b -= a;
	}
	return a;
}

int main()
{
	system("chcp 1251");
	int a, b;
	cout << "введите числа:" << endl;
	cin >> a >> b;

	cout << "нод = " << scenemode(a, b);
}