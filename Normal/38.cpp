// Найти частное от деления и остаток используя только операции сложения и вычитания.

#include <iostream>
#include <cmath>

int main()
{
    setlocale(LC_ALL, "RU");

    int iDivisible, iDivider;

    std::cout << "Введите делимое: ";
    std::cin >> iDivisible;

    std::cout << "Введите делитель: ";
    std::cin >> iDivider;

    int iInteger = 0;

    while (abs(iDivisible) && abs(iDivisible) >= abs(iDivider) && iDivider != 0)
    {
        if ((iDivisible >= 0 && iDivider > 0) || (iDivisible < 0 && iDivider < 0))
        {
            iDivisible -= iDivider;
            ++iInteger;
        }
        else if (iDivisible < 0 && iDivider > 0)
        {
            iDivisible += iDivider;
            --iInteger;
        }
        else if (iDivisible > 0 && iDivider < 0)
        {
            iDivisible += iDivider;
            --iInteger;
        }
    }

    if (iDivider != 0)
    {
        std::cout << "Частное от деления: " << iInteger << "\n";
        std::cout << "Остаток от деления: " << iDivisible << "\n";
    }
    else std::cout << "На ноль делить нельзя." << "\n";

}

