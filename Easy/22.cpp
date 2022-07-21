// Найти след матрицы, след матрицы — сумма элементов главной диагонали. Размер матрицы вводит пользователь, матрицу заполнять случайными числами.

#include <iostream>
#include <ctime>

void FillArray(int** const pArray, const int Rows, const int Cols)
{
    for (int i = 0; i < Rows; ++i)
    {
        for (int j = 0; j < Cols; ++j)
        {
            pArray[i][j] = rand() % 101;
        }
    }
}

void ShowArray(int const * const * pArray, const int Rows, const int Cols)
{
    for (int i = 0; i < Rows; ++i)
    {
        for (int j = 0; j < Cols; ++j)
        {
            std::cout << pArray[i][j] << "\t";
        }
        std::cout << "\n";
    }
}

int main()
{
    setlocale(LC_ALL, "RU");

    srand(time(NULL));

    int iRows, iCols;

    int iNumber = 0;

    std::cout << "Выберите количество строк матрицы: ";
    std::cin >> iRows;

    std::cout << "Выберите количество столбцов матрицы: ";
    std::cin >> iCols;

    int** iArray = new int* [iRows];

    for (int i = 0; i < iRows; ++i)
    {
        iArray[i] = new int[iCols];
    }

    FillArray(iArray, iRows, iCols);

    ShowArray(iArray, iRows, iCols);
    
    for (int i = 0; i < iRows; ++i)
    {
        for (int j = 0; j < iCols; ++j)
        {
            if (i == j)
            {
                iNumber += iArray[i][j];
            }
        }
    }

    std::cout << "След матрицы: " << iNumber << "\n";
    
    for (int i = 0; i < iRows; ++i)
    {
        delete[] iArray[i];
    }

    delete[] iArray;
}


