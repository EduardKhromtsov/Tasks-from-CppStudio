/*Дана матрица. Найти сумму элементов в тех столбцах, которые не содержат отрицательные элементы. 
Количество столбцов и строк матрицы должен вводить пользователь. По введенным данным, динамически, должна выделиться память под матрицу.
Матрицу заполнять случайными значениями, как отрицательными, так и положительными.*/

#include <iostream>
#include <iomanip>
#include <ctime>

void FillArray(int* const* const pArr, const unsigned short int Rows, const unsigned short int Cols)
{
    for (int i = 0; i < Rows; ++i)
    {
        for (int j = 0; j < Cols; ++j)
        {
            pArr[i][j] = rand() % 19 - 9;
        }
    }
}

void ShowArray(const int* const* const pArr, const unsigned short int Rows, const unsigned short int Cols)
{
    for (int i = 0; i < Rows; ++i)
    {
        for (int j = 0; j < Cols; ++j)
        {
            std::cout << std::setw(3) << pArr[i][j];
        }
        std::cout << "\n";
    }
    std::cout << "\n";
}

void Sum(const int* const* const pArr, const unsigned short int Rows, const unsigned short int Cols)
{
    int iSum = 0;

    for (int i = 0; i < Cols; ++i)
    {
        for (int j = 0; j < Rows; ++j)
        {
            if (pArr[j][i] >= 0)
            {
                iSum += pArr[j][i];
            }
            else
            {
                iSum = 0;
                break;
            }
        }
        if (iSum != 0)
        {
            std::cout << "Array column " << i << ": " << iSum << "\n";
            iSum = 0;
        }
    }

    std::cout << "\n";
}

int main()
{
    srand(time(NULL));

    unsigned short int iCols, iRows;

    std::cout << "Enter the number of rows: ";
    std::cin >> iRows;

    std::cout << "Enter the number of columns: ";
    std::cin >> iCols;

    int** pArray = new int* [iRows];

    for (int i = 0; i < iRows; ++i)
    {
        pArray[i] = new int [iCols];
    }

    FillArray(pArray, iRows, iCols);

    ShowArray(pArray, iRows, iCols);

    Sum(pArray, iRows, iCols);

    for (int i = 0; i < iRows; ++i)
    {
        delete[] pArray[i];
    }

    delete[] pArray;
}


