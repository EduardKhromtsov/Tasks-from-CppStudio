/*Организовать ввод двухзначного натурального числа с клавиатуры.
Программа должна определить наименьшую и наибольшую цифры, которые входят в состав данного натурального числа.*/

#include <iostream>

int main()
{
    setlocale(LC_ALL, "RU");

    int iNumber;

    std::cout << "Введите число не больше 99: ";
    std::cin >> iNumber;

    if (iNumber > 99 || iNumber < 10)
    {
        std::cout << "Введено неправильное число." << std::endl;
    }
    else if ((iNumber / 10) > (iNumber % 10))
    {
        std::cout << iNumber / 10 << " - большая цифра" << std::endl;
        std::cout << iNumber % 10 << " - меньшая цифра" << std::endl;
    }
    else if ((iNumber / 10) < (iNumber % 10))
    {
        std::cout << iNumber / 10 << " - меньшая цифра" << std::endl;
        std::cout << iNumber % 10 << " - большая цифра" << std::endl;
    }
    else
    {
        std::cout << "Цифры одинаковые." << std::endl;
    }
}


