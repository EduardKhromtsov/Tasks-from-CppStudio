// Используя показатели функции вычислить цепную дробь. Количество элементов дроби надо задавать с клавиатуры.

#include <iostream>

int main()
{
    setlocale(LC_ALL, "RU");

    unsigned short int iNumber;

    float fY = 1.0;

    std::cout << "Введите количество элементов дроби 1+1/(1+1/(1+1/(1+1/…))): ";
    std::cin >> iNumber;

    for (int i = 0; i < iNumber; ++i)
    {
        fY = 1 + 1 / fY;
    }

    std::cout << "Результат: " << fY << "\n";

}


