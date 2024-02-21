#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    setlocale(0, "");
    const int rows = 3, columns = 5;
    double Ar[rows][columns];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cin >> Ar[i][j];
        }
    }
    cout << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << Ar[i][j] << "\t";
        }
        cout << endl;
    }
    double Sum = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            Sum = Sum + Ar[i][j];
        }
    }
    cout << endl << "Среднее Арифметическое: " << (Sum / (rows * columns));
}