// Задана матрица А размерностью n x m. Записать все элементы матрицы в одномерный массив.

#include <iostream>
#include <ctime>
#include <iomanip>

void FillArray(int* const* const pArr, const unsigned short int &Rows, const unsigned short int &Cols)
{
    for (int i = 0; i < Rows; ++i)
    {
        for (int j = 0; j < Cols; ++j)
        {
            pArr[i][j] = rand() % 100;
        }
    }
}

void ShowArray(const int* const* const pArr, const unsigned short int& Rows, const unsigned short int& Cols)
{
    for (int i = 0; i < Rows; ++i)
    {
        for (int j = 0; j < Cols; ++j)
        {
            std::cout << std::setw(4) << pArr[i][j] << " ";
        }
        std::cout << "\n";
    }
}

void ConvertMatrixToArray(const int* const* const pArr, const unsigned short int& Rows, const unsigned short int& Cols, int* const pNewArr)
{
    unsigned short int iCounter = 0;
    
    std::cout << "\n";

    for (int i = 0; i < Rows; ++i)
    {
        for (int j = 0; j < Cols; ++j)
        {
            pNewArr[iCounter] = pArr[i][j];
            std::cout << pNewArr[iCounter] << " ";
            ++iCounter;
        }
    }
    std::cout << "\n\n";
}

int main()
{
    setlocale(LC_ALL, "RU");
    srand(time(NULL));

    unsigned short int iRows, iCols;

    std::cout << "Введите количество строк двумерного массива: ";
    std::cin >> iRows;

    std::cout << "Введите количество столбцов двумерного массива: ";
    std::cin >> iCols;

    int** pArray = new int* [iRows];

    for (int i = 0; i < iRows; ++i)
    {
        pArray[i] = new int[iCols];
    }

    FillArray(pArray, iRows, iCols);

    ShowArray(pArray, iRows, iCols);

    int* pNewArray = new int[iRows * iCols];

    ConvertMatrixToArray(pArray, iRows, iCols, pNewArray);

    delete[] pNewArray;

    for (int i = 0; i < iRows; ++i)
    {
        delete[] pArray[i];
    }

    delete[] pArray;

}