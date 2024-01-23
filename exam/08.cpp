#include <iostream>

using namespace std;

int reverseDigits(int number) {
    int reversedNumber = 0;

    while (number > 0) {
        int digit = number % 10;  // Получаем последнюю цифру числа
        reversedNumber = reversedNumber * 10 + digit;  // Добавляем цифру в обратном порядке
        number /= 10;  // Убираем последнюю цифру из числа
    }

    return reversedNumber;
}

int main() {
    int inputNumber;

    // Ввод числа с клавиатуры
    cout << "Введите целое число: ";
    cin >> inputNumber;

    // Получение числа с обратным порядком цифр
    int reversedResult = reverseDigits(inputNumber);

    // Вывод результата
    cout << "Число с обратным порядком цифр: " << reversedResult << endl;

    return 0;
}
