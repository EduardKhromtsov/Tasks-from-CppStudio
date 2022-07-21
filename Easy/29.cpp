// Программа проверяет, является ли введенное с клавиатуры число — целым числом.

#include <iostream>

int main()
{
    setlocale(LC_ALL, "RU");

    float fNumber = 0.0;

    std::cout << "Введите число и нажмите <Enter> -> ";
    std::cin >> fNumber;

    if (fNumber == (int)fNumber)
    {
        std::cout << "Введенное число является целым числом." << "\n";
    }
    else
    {
        std::cout << "Введенное число не является целым числом." << "\n";
    }
}


