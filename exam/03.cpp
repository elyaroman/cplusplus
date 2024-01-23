#include <iostream>

using namespace std;

int main() {
	// разделила по подзадачам, тк так проще для восприятия будет (потом комбинацию норм подобрать)

	//Элементы массива целые числа. Размер массива 10. 

	const int size = 10;
	int x[size];

	// Элементы массива вещественные числа. Размер массива 10. 

	const double size = 10;
	int x[size];

	//Элементы массива целые числа. Ввод с клавиатуры размера массива.

	int size;
	cout << "Enter the array size: ";
	cin >> size;
	int x[size];

	// Ввод элементов массива.
	cout << "Enter the array elements (" << size << "): " << endl;
	for (int i = 0; i < size; ++i) {
		cout << "The element number " << i << endl;
		cin >> x[i];
	}
	
	// заполненнный массив в коде (мало ли спросит)

	int x[size] = { 1, 2, -3, -4, 5 };

	// Вывод на экран суммы элементов массива.

	int sum = 0;
	for (int i = 0; i < size; ++i) {
		sum += x[i];
	}

	cout << "Array elements summary: " << sum <<endl;

	// Вывод на экран произведения элементов массива.
	
	double multiply = 1.0;
	for (int i = 0; i < size; ++i) {
		multiply *= x[i];
	}

	cout << "The multiplicion of the array elements equals " << multiply << endl;

	// Вывод на экран отрицательных элементов массива.
	
	cout << "Negative array elements:";
	for (int i = 0; i < size; ++i) {
		if (x[i] < 0) {
			cout << x[i] << " ";
		}
	}

	// Вывод на экран суммы отрицательных элементов массива.

	int negative_sum = 0;
	for (int i = 0; i < size; ++i) {
		if (X[i] < 0) {
			negative_sum += x[i];
		}
	}

	cout << "Negative array elements summary: " << negative_sum << endl;
}
