#include <iostream>
using namespace std;

int* transposition(int array[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (array[i] == key)
        {
            int temp = array[i];
            array[i] = array[i - 1];
            array[i - 1] = temp;
            return array;
        }
    }
}


int main()
{
    int n, key;
    cin >> n;
    cin >> key;

    int* array = new int[n];
    for (int i = 0; i < n; i++)
        cin >> array[i];
    int* c = transposition(array, n, key);

    for (int i = 0; i < n; i++)
        cout << c[i] << " ";
    cout << endl;
    delete[]c;
}
