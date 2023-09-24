#include <iostream>
#include <string>
using namespace std;

bool Input(char &a, char &b)
{
	cin >> a;
	cin >> b;

	if (isdigit(a) && isdigit(b))
		return true;
	else
		return false;
}

int main()
{
	char a, b;

	if (Input(a, b) == false)
	{
		cerr << "error";
		return 1;
	}

	int s = (a - '0') + (b - '0');
	cout << s;
	return 0;
}
