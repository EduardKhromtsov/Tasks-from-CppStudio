/*Возвести, введенное с клавиатуры число, в степень n, степень тоже вводится с клавиатуры. Возведение в степень организовать с использованием циклов.
Примечание: не использовать функцию pow для нахождения степени.*/

#include <iostream>

int main()
{
    setlocale(LC_ALL, "RU");

    int iNumber, iPower, iResult = 0;

    std::cout << "Введите число: ";
    std::cin >> iNumber;

    std::cout << "Введите степень: ";
    std::cin >> iPower;
    
    if (iPower == 0)
    {
        iResult = 1;
    }
    else
    {
        iResult = iNumber;

        for (int i = 1; i < iPower; ++i)
        {
            iResult = iResult * iNumber;
        }
    }

    std::cout << "Возведение числа в степень: " << iResult << "\n\n";

}


