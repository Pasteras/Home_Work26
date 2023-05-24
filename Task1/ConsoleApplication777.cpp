//Write a function to convert a one-dimensional int array 
//to a two-dimensional array. The number contained in the 
//one-dimensional array must be replaced by a pointer, and 
//the array it points to will have the size of the number 
//contained in the initial array. The two-dimensional array 
//must be of type char or string and filled with stars.

#include <iostream>

using namespace std;

int main()
{
    int size_mas = 4;

    int Mas[] = {1, 5, 4, 2};
    
    string* Massiv = new string[size_mas];

    for (int i = 0; i < size_mas; i++)
    {
        for (int j = 0; j < Mas[i]; j++)
        {
            Massiv[i] += "*";
        }
    }

    for (int i = 0; i < size_mas; i++)
    {
        cout << Massiv[i] << endl;
    }
}
