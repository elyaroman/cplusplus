#include <iostream>

using namespace std;

int main()
{
	int op;
	int variant;
	cin >> variant;

	if (variant == 1) // вариант 1 - день недели
	{
		cin >> op;
		switch (op)
		{
		case 1:
			cout << "понедельник" << endl;
		case 2:
			cout << "вторник" << endl;
		case 3:
			cout << "среда" << endl;
		case 4:
			cout << "четверг" << endl;
		case 5:
			cout << "пятница" << endl;
		case 6:
			cout << "суббота" << endl;
		case 7:
			cout << "воскресенье" << endl;
		}
	}
	if (variant == 2) // вариант 2 - название месяца
	{
		cin >> op;
		switch (op)
		{
		case 1:
			cout << "январь" << endl;
		case 2:
			cout << "февраль" << endl;
		case 3:
			cout << "март" << endl;
		case 4:
			cout << "апрель" << endl;
		case 5:
			cout << "май" << endl;
		case 6:
			cout << "июнь" << endl;
		case 7:
			cout << "июль" << endl;
		case 8:
			cout << "август" << endl;
		case 9:
			cout << "сентябрь" << endl;
		case 10:
			cout << "октябрь" << endl;
		case 11:
			cout << "ноябрь" << endl;
		case 12:
			cout << "декабрь" << endl;
		}
	}
	if (variant == 3) // вариант 3 - один из цветов радуги
	{
		cin >> op;
		switch (op)
		{
		case 1:
			cout << "красный" << endl;
		case 2:
			cout << "оранжевый" << endl;
		case 3:
			cout << "жёлтый" << endl;
		case 4:
			cout << "зелёный" << endl;
		case 5:
			cout << "голубой" << endl;
		case 6:
			cout << "синий" << endl;
		case 7:
			cout << "фиолетовый" << endl;
		}
	}
	if (variant == 4) // вариант 4 - фамилии одногруппников
	{
		cin >> op;
		switch (op)
		{
		case 1:
			cout << "Баймухаметова" << endl;
		case 2:
			cout << "Богданов" << endl;
		case 3:
			cout << "Галкина" << endl;
		case 4:
			cout << "Гимадеева" << endl;
		case 5:
			cout << "Кадушкина" << endl;
		}
	}
}
