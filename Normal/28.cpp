// Написать функцию, подсчитывающую среднее арифметическое целого массива. Предварительно объявив и, при необходимости, инициализировав переменные.

#include <iostream>
#include <ctime>

double Average(const int* const pArr, const int Size)
{
    int iSum = 0;

    for (int i = 0; i < Size; ++i)
    {
        iSum += pArr[i];
    }

    return (double)iSum / Size;
}

int main()
{
    setlocale(LC_ALL, "RU");
    srand(time(NULL));

    int iSize;

    std::cout << "Укажите количество элементов массива: ";
    std::cin >> iSize;

    int* pArray = new int[iSize];

    for (int i = 0; i < iSize; ++i)
    {
        pArray[i] = rand() % 100;
        std::cout << pArray[i] << " ";
    }

    std::cout << "\n";

    std::cout << "Среднее арифметическое целого массива = " << Average(pArray, iSize) << "\n";

    delete[] pArray;
}


