// Составить алгоритм определяющий, есть ли среди цифр введенного трехзначного числа — одинаковые. Число вводится с клавиатуры.

#include <iostream>

int main()
{
    setlocale(LC_ALL, "RU");

    int iNumber;

    std::cout << "Введите трехзначное число: ";
    std::cin >> iNumber;

    if (iNumber > 999 || iNumber < 100)
    {
        std::cout << "Введено некорректное число." << std::endl;
    }
    else
    {
        if ((iNumber / 100 == (iNumber / 10) % 10) || (iNumber / 100 == (iNumber % 10)) || ((iNumber / 10) % 10) == (iNumber % 10))
        {
            std::cout << "Среди цифр введенного трехзначного числа " << iNumber << " есть одинаковые." << std::endl;
        }
        else
        {
            std::cout << "Одинаковых цифр нет." << std::endl;
        }
    }

}


