#include <iostream>
#include <fstream>
using namespace std;

int* max_vect(int kc, int a[], int b[])
{
    int* c = new int[kc];
    for (int i = 0; i < kc; i++)
    {
        if (a[i] > b[i])
            c[i] = a[i];
        else
            c[i] = b[i];
    }
    return c;
}

int main()
{
    int a[] = { 1,2,3,4,5,6,7,2 };
    int b[] = { 7,6,5,4,3,2,1,3 };
    int kc = sizeof(a) / sizeof(a[0]);
    int* c;
    c = max_vect(kc, a, b);

    ofstream fout("test.txt");
    for (int i = 0; i < 8; i++)
    {
        fout << "a[" << i << "] = " << a[i] << "; ";
        fout << "b[" << i << "] = " << b[i] << "; ";
        fout << "c[" << i << "] = " << c[i] << endl;
    }
    fout.close();

    delete[]c;
}
