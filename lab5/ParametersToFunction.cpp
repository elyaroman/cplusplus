#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	if (argc < 4) {
		cout << "error" << endl;
		return 1;
	}
	int result = 0;
	if (_stricmp(argv[1], "-a") == 0) {
		result = atoi(argv[2]) + atoi(argv[3]);
	}
	else if (_stricmp(argv[1], "-m") == 0) {
		result = atoi(argv[2]) * atoi(argv[3]);
	}
	else {
		cout << "error" << endl;
		return 1;
	}
	cout << result;
	return 0;
}
