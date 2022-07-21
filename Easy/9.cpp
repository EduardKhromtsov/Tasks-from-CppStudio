// Дан одномерный массив, длину массива задаёт пользователь. Вычислить сумму квадратов тех чисел, модуль которых превышает значение 2,5.

#include <iostream>
#include <cmath>

template <typename T> void FillArray(T* const Array, const int Size)
{
    for (int i = 0; i < Size; ++i)
    {
        std::cout << "Введите значение для элемента " << "[" << i << "]: ";
        std::cin >> Array[i];
    }
}

template <typename T> void ShowArray(const T* const Array, const int Size)
{
    for (int i = 0; i < Size; ++i)
    {
        std::cout << Array[i] << " ";
    }

    std::cout << std::endl;
}

float Sum(const float* const Array, const int Size)
{
    float fResult = 0;

    for (int i = 0; i < Size; ++i)
    {
        if (fabs(Array[i] > 2.5))
        {
            fResult += pow(Array[i], 2);
        }
    }

    return fResult;
}

int main()
{
    setlocale(LC_ALL, "RU");

    int iSize;

    std::cout << "Введите длину массива: ";
    std::cin >> iSize;

    float* fArray = new float[iSize];

    FillArray(fArray, iSize);
    
    ShowArray(fArray, iSize);

    std::cout << "Сумма = " << Sum(fArray, iSize) << std::endl;

    delete[] fArray;

}


