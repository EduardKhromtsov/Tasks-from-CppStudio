/*Разработать функцию обнуления столбца в двумерном массиве. Обнулить 3 столбца. 
Результат вывести на печать.Согласно условию задачи, какие именно столбцы необходимо обнулить — не оговаривается.
Например, в существующем решении этой задачи, обнуляются первые три четных столбца.*/

#include <iostream>
#include <ctime>
#include <iomanip>

void DeleteColumn(int* const* const pArr, const unsigned short int Rows, const unsigned short int ColumnNumber)
{
    for (int i = 0; i < Rows; ++i)
    {
        pArr[i][ColumnNumber - 1] = NULL;
    }
}

void ShowArray(const int* const* const pArr, const unsigned short int Rows, const unsigned short int Cols)
{
    for (int i = 0; i < Rows; ++i)
    {
        for (int j = 0; j < Cols; ++j)
        {
            std::cout << std::setw(4) << pArr[i][j];
        }
        std::cout << "\n";
    }

    std::cout << "\n";
}

int main()
{
    setlocale(LC_ALL, "RU");
    srand(time(NULL));

    unsigned short int iRows = 10, iCols = 8, iColumnNumber;

    int** pArray = new int* [iRows];

    for (int i = 0; i < iRows; ++i)
    {
        pArray[i] = new int[iCols];
    }

    for (int i = 0; i < iRows; ++i)
    {
        for (int j = 0; j < iCols; ++j)
        {
            pArray[i][j] = rand() % 20;
        }
    }

    ShowArray(pArray, iRows, iCols);

    DeleteColumn(pArray, iRows, 1);
    DeleteColumn(pArray, iRows, 3);
    DeleteColumn(pArray, iRows, 5);

    ShowArray(pArray, iRows, iCols);

    for (int i = 0; i < iRows; ++i)
    {
        delete[] pArray[i];
    }

    delete[] pArray;
}


