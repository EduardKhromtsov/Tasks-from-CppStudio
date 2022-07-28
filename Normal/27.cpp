/*Определить, является ли введённое число составным. Составное число — число полученное путём произведения двух натуральных чисел, больших единицы. 
Ряд составных чисел: 4, 6, 8, 9, 10, 12, 14 и т.д.*/

#include <iostream>
#include <cmath>

bool isPrime(int Number)
 {
    for (int i = 2; i <= sqrt(Number); ++i)
    {
        if (Number % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    setlocale(LC_ALL, "RU");

    int iNumber;

    std::cout << "Введите число больше 1: ";
    std::cin >> iNumber;

    while (iNumber <= 1)
    {
        std::cout << "Вы ввели некорректное число, повторите ввод: ";
        std::cin >> iNumber;
    }

    if (isPrime(iNumber))
    {
        std::cout << "Число " << iNumber << " - простое.\n\n";
    }
    else
    {
        std::cout << "Число " << iNumber << " - составное.\n\n";
    }
}