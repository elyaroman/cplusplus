#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{
    system("chcp 1251");

    int n;
    string line;
    cout << "Enter the length of the poem\n";
    cin >> n;
    cin.ignore();
    ofstream fout("text.txt");
    for (int i = 0; i < n; i++)
    {
        getline(cin, line);
        fout << line << endl;
    }
    fout.close();
}
