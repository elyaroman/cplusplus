#include <iostream>
using namespace std;

int sum(int mas[], const int n)
{
    int s = 0;
    for (int i = 0; i < n; i++)
        s += mas[i];
    return s;
}

int sumofpos(int mas[], const int n)
{
    int s = 0;
    for (int i = 0; i < n; i++)
        if (mas[i] > 0)
            s += mas[i];
    return s;
}

int sumofneg(int mas[], const int n)
{
    int s = 0;
    for (int i = 0; i < n; i++)
        if (mas[i] < 0)
            s += mas[i];
    return s;
}

int sumofodd(int mas[], const int n)
{
    int s = 0;
    for (int i = 0; i < n; i++)
        if (i % 2 == 0)
            s += mas[i];
    return s;
}

int sumofeven(int mas[], const int n)
{
    int s = 0;
    for (int i = 0; i < n; i++)
        if (i % 2 == 1)
            s += mas[i];
    return s;
}

void sort(int mas[], const int n)
{
    int min = 0, buf = 0;
    for (int i = 0; i < n; i++)
    {
        min = i; 
        for (int j = i + 1; j < n; j++)
            min = (mas[j] < mas[min]) ? j : min;
        if (i != min)
        {
            buf = mas[i];
            mas[i] = mas[min];
            mas[min] = buf;
        }
    }
}

int main()
{
    const int n = 10;
    int mas[n] = {9,8,7,6,1,2,3,5,4,9};

    cout << "sum = " << sum(mas, n) << endl;
    cout << "sum of positives = " << sumofpos(mas, n) << endl;
    cout << "sum of negatives = " << sumofneg(mas, n) << endl;
    cout << "sum of odds = " << sumofodd(mas, n) << endl;
    cout << "sum of evens = " << sumofeven(mas, n) << endl;
    cout << "sorted array: \n";
    sort(mas, n);
    for (int i = 0; i < n; i++)
    {
        cout << "mas[" << i << "]=";
        cout << mas[i] << endl;
    }
}
