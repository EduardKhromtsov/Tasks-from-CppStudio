// Нужно вычислить произведение матрицы на вектор. В полученном векторе найти макисмальный элемент.

#include <iostream>
#include <assert.h>
#include <vector>

void FillArray(int* const* const pArr, const unsigned short int Rows, const unsigned short int Cols)
{
    std::cout << "Введите элементы массива: " << "\n";

    for (int i = 0; i < Rows; ++i)
    {
        for (int j = 0; j < Cols; ++j)
        {
            std::cout << "matrix" << "[" << i + 1 << "]" << "[" << j + 1 << "] = ";
            std::cin >> pArr[i][j];
        }
    }
}

void FillVector(std::vector<int> &iVector)
{
    std::cout << "Введите элементы вектора: " << "\n";

    for (int i = 0; i < iVector.size(); ++i)
    {
        std::cout << "vector" << "[" << i + 1 << "] = ";
        std::cin >> iVector[i];
    }
}

void ShowArrayAndVector(const int* const* const pArr, const unsigned short int Rows, const unsigned short int Cols, std::vector <int> const & iVector)
{
    std::cout << "\nВведенная матрица: " << "\n";

    for (int i = 0; i < Rows; ++i)
    {
        for (int j = 0; j < Cols; ++j)
        {
            std::cout << pArr[i][j] << "\t";
        }
        std::cout << "\n";
    }

    std::cout << "\nВведенный вектор: " << "\n";

    for (int i = 0; i < iVector.size(); ++i)
    {
        std::cout << iVector[i] << "\n";
    }
}

void Result(const int* const* const pArr, const unsigned short int Rows, const unsigned short int Cols, std::vector <int> const& iVector, std::vector<int>& iVectorOut)
{
    for (int i = 0; i < Rows; ++i)
    {
        for (int j = 0; j < Cols; ++j)
        {
            iVectorOut[i] += pArr[i][j] * iVector[j];
        }
    }

    std::cout << "\nРезультирующий вектор: " << "\n";
    
    for (int i = 0; i < Rows; ++i)
    {
        std::cout << iVectorOut[i] << "\n";
    }
}

int main()
{
    setlocale(LC_ALL, "RU");

    unsigned short int iRows, iCols;
    int iMaximumValue;

    std::cout << "Введите количество строк матрицы: ";
    std::cin >> iRows;

    std::cout << "Введите количество столбцов матрицы: ";
    std::cin >> iCols;

    /////Создание двумерного массива/////
    
    int** pArray = new int* [iRows];

    for (int i = 0; i < iRows; ++i)
    {
        pArray[i] = new int[iCols];
    }

    /////////////////////////////////////
    
    /////Создание вектора/////

    std::vector<int> iMyVector(iCols);

    /////////////////////////
    
    FillArray(pArray, iRows, iCols);

    FillVector(iMyVector);

    ShowArrayAndVector(pArray, iRows, iCols, iMyVector);

    /////Создание результирующего вектора/////

    std::vector<int> iMyVectorOut(iRows);

    /////////////////////////

    Result(pArray, iRows, iCols, iMyVector, iMyVectorOut);

    iMaximumValue = iMyVectorOut[0];

    for (int i = 1; i < iRows; ++i)
    {
        if (iMaximumValue < iMyVectorOut[i])
        {
            iMaximumValue = iMyVectorOut[i];
        }
    }

    std::cout << "\nМаксимальное значение = " << iMaximumValue << "\n\n";

    for (int i = 0; i < iRows; ++i)
    {
        delete[] pArray[i];
    }

    delete[] pArray;


}

