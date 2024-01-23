#include <iostream>
#include <windows.h>
using namespace std;

struct Numbers
{
	double a, b, c;

	double addition()
	{
		return  a + b + c;
	}

	double multyplication()
	{
		return a * b * c;
	}

	double division()
	{
		return a / b / c;
	}

	double power()
	{
		return pow(a, (b + c));
	}
};

int main()
{
	Numbers variables;
	variables.a = 1.0;
	variables.b = 2.0;
	variables.c = 3.0;

	cout << "addition: " << variables.addition() << endl;
	cout << "multyplication: " << variables.multyplication() << endl;
	cout << "division: " << variables.division() << endl;
	cout << "power: " << variables.power() << endl;
}