#include <iostream>
using namespace std;

int grade(int score)
{
	if (score > 89 and score < 101)
		return 4;
	else if (score > 79 and score < 90)
		return 3;
	else if (score > 69 and score < 80)
		return 2;
	else if (score > 59 and score < 70)
		return 1;
	else if (score < 60)
		return 0;
}

int main()
{
	system("chcp 1251");

	int score;
	cout << "введите баллы:" << endl;
	cin >> score;

	cout << "ваша оценка: " << grade(score) << endl;
}