// Дан массив размера n, заполнить его случайными числами. Найти все нечётные числа массива.

#include <iostream>
#include <ctime>

void FillArray(int *const pArr, const int Size)
{
    for (int i = 0; i < Size; ++i)
    {
        pArr[i] = rand() % 100;
    }
}

void ShowArray(const int* const pArr, const int Size)
{
    std::cout << "Массив = ";

    for (int i = 0; i < Size; ++i)
    {
        std::cout << pArr[i] << " ";
    }

    std::cout << "\n";
}

void SearchOddNumbers(const int* const pArr, const int Size)
{
    std::cout << "Нечетные числа = ";

    for (int i = 0; i < Size; ++i)
    {
        if (!(pArr[i] % 2 == 0))
            std::cout << pArr[i] << " ";
    }
    
    std::cout << "\n";
}

int main()
{
    setlocale(LC_ALL, "RU");

    srand(time(NULL));

    int iSize;

    std::cout << "Введите количество элементов массива: ";
    std::cin >> iSize;

    int* pArray = new int[iSize];

    FillArray(pArray, iSize);

    ShowArray(pArray, iSize);

    SearchOddNumbers(pArray, iSize);

    delete[] pArray;
}