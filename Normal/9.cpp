/*Составить программу, которая будет генерировать случайные числа в интервале[a;b] и заполнять ими двумерный массив размером 10 на 10. 
В массиве необходимо найти номер строки с минимальным элементом.
Поменять строки массива местами, строку с минимальным элементом и первую строку массива. Организовать удобный вывод на экран.*/

#include <iostream>
#include <iomanip>
#include <ctime>

void FillArray(double* const* const pArray, const int Rows, const int Cols, const double MinValue, const double MaxValue)
{
    for (int i = 0; i < Rows; ++i)
    {
        for (int j = 0; j < Cols; ++j)
        {
            pArray[i][j] = MinValue + (double)rand() / RAND_MAX * (MaxValue - MinValue);
        }
    }
}

void ShowArray(const double* const* const pArray, const int Rows, const int Cols)
{
    for (int i = 0; i < Rows; ++i)
    {
        for (int j = 0; j < Cols; ++j)
        {
            std::cout << std::fixed << std::setprecision(3) << pArray[i][j] << " ";
        }
        std::cout << "\n";
    }
}

void SearchMinValue(const double* const* const pArray, const int Rows, const int Cols, double &MinElementRef, int &MinimumValueRow)
{
    MinElementRef = pArray[0][0];
    MinimumValueRow = 0;

    for (int i = 0; i < Rows; ++i)
    {
        for (int j = 0; j < Cols; ++j)
        {
            if (MinElementRef > pArray[i][j])
            {
                MinElementRef = pArray[i][j];
                MinimumValueRow = i;
            }
        }
    }

    std::cout << "\nНомер строки с минимальным элементом: " << MinimumValueRow + 1 << "\n";
    std::cout << "Минимальный элемент: " << MinElementRef << "\n";
}

void Permutation(double* const* const pArray, const int Cols, const int MinimumValueRow)
{
    std::cout << "\nМассив с перестановленными строками" << "\n";

    if (MinimumValueRow != 0)
    {
        double* dNewArray = new double[Cols];

        for (int i = 0; i < Cols; ++i)
        {
            dNewArray[i] = pArray[MinimumValueRow][i];
        }

        for (int i = 0; i < Cols; ++i)
        {
            pArray[MinimumValueRow][i] = pArray[0][i];
        }

        for (int i = 0; i < Cols; ++i)
        {
            pArray[0][i] = dNewArray[i];
        }

        delete[] dNewArray;
    }
}

int main()
{
    setlocale(LC_ALL, "RU");
    srand(time(NULL));

    int iRows = 10, iCols = 10, iMinValueRow;

    double dMinValue, dMaxValue, dMinimumElement;

    std::cout << "Введите минимальное число интервала: ";
    std::cin >> dMinValue;

    std::cout << "Введите максимальное число интервала: ";
    std::cin >> dMaxValue;

    //////Создание двумерного массива////////

    double** dArray = new double* [iRows];
    
    for (int i = 0; i < iRows; ++i)
    {
        dArray[i] = new double[iCols];
    }

    ////////////////////////////////////////

    FillArray(dArray, iRows, iCols, dMinValue, dMaxValue);
    ShowArray(dArray, iRows, iCols);

    SearchMinValue(dArray, iRows, iCols, dMinimumElement, iMinValueRow);

    Permutation(dArray, iCols, iMinValueRow);

    ShowArray(dArray, iRows, iCols);

    ///////Удаление двумерного массива///////
    
    for (int i = 0; i < iRows; ++i)
    {
        delete[] dArray[i];
    }
    
    delete[] dArray;

    ////////////////////////////////////////
}

