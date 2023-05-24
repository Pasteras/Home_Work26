//Write a program that element-by-element sums two dynamic 
//two-dimensional arrays filled with random numbers and stores 
//the result in the third array. The dimensions of the output 
//array data are set by the user.

#include <iostream>

using namespace std;

void ShowMas(int** Mas1, int** Mas2, int** Mas3, int &size_m)
{
    for (int i = 0; i < size_m; i++)
    {
        for (int j = 0; j < size_m; j++)
        {
            cout << Mas1[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl << endl;
    for (int i = 0; i < size_m; i++)
    {
        for (int j = 0; j < size_m; j++)
        {
            cout << Mas2[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl << endl;
    for (int i = 0; i < size_m; i++)
    {
        for (int j = 0; j < size_m; j++)
        {
            cout << Mas3[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl << endl;
}

int main()
{
    int size_m = 5;

    int** Mas1 = new int* [size_m];
    int** Mas2 = new int* [size_m];
    int** Mas3 = new int* [size_m];

    srand(time(NULL));
    //Mas1
    for (int i = 0; i < size_m; i++)
    {
        Mas1[i] = new int[size_m];
    }

    for (int i = 0; i < size_m; i++)
    {
        for (int j = 0; j < size_m; j++)
        {
            Mas1[i][j] = rand() % 20;
        }
    }
    //Mas2
    for (int i = 0; i < size_m; i++)
    {
        Mas2[i] = new int[size_m];
    }

    for (int i = 0; i < size_m; i++)
    {
        for (int j = 0; j < size_m; j++)
        {
            Mas2[i][j] = rand()% 20;
        }
    }
    //Mas3
    for (int i = 0; i < size_m; i++)
    {
        Mas3[i] = new int[size_m];
    }

    for (int i = 0; i < size_m; i++)
    {
        for (int j = 0; j < size_m; j++)
        {
            Mas3[i][j] = Mas1[i][j] + Mas2[i][j];
        }
    }
    ShowMas(Mas1, Mas2, Mas3, size_m);
}

