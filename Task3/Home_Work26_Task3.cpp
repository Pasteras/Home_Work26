//Write a program that removes empty 
//rows from a two-dimensional array.
#include <iostream>
#include <string.h>
#include <cstring>

using namespace std;

void ShowMas(string** Mas, int& size_m);

int main()
{
    int size_m = 3;
    string** Mas = new string* [size_m];
    for (int i = 0; i < size_m; i++)
    {
        Mas[i] = new string[size_m];
    }

    for (int i = 0; i < size_m; i++)
    {
        for (int j = 0; j < size_m; j++)
        {

            cin >> Mas[i][j];
        }
    }

    for (int i = 0; i < size_m; i++)
    {
        for (int j = 0; j < size_m; j++)
        {
            if (size((Mas[i][j])) == 0)
            {
                delete[] Mas[j];
            }
        }
    }
    ShowMas(Mas, size_m);
    delete[] Mas;
}

void ShowMas(string** Mas, int& size_m)
{
    for (int i = 0; i < size_m; i++)
    {
        for (int j = 0; j < size_m; j++)
        {
            cout << Mas[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl << endl;
}

