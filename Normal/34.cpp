// Напишите функцию, которая принимает два целых числа n и k и возвращает число, содержащее k первых цифр числа n.

#include <iostream>
#include <cmath>

void FindNumberSize(unsigned int iNumber, unsigned short int &iNumberSize)
{
    while (iNumber /= 10)
        ++iNumberSize;
}

int DisplayDigit(const unsigned int iNumber, const unsigned short int iDigit, const unsigned short int iNumberSize)
{
    if (iDigit > iNumberSize || iDigit <= 0)
        throw std::exception("Количество разрядов указано неверно.");

    return iNumber / (int)pow(10, iNumberSize - iDigit);
}

int main()
{
    setlocale(LC_ALL, "RU");

    unsigned int iNumber;
    unsigned short int iNumberSize = 1, iDigit;

    std::cout << "Введите число: ";
    std::cin >> iNumber;

    FindNumberSize(iNumber, iNumberSize);

    std::cout << "Укажите, сколько разрядов нужно показать: ";
    std::cin >> iDigit;

    try
    {
        std::cout << DisplayDigit(iNumber, iDigit, iNumberSize);
    }
    catch (const std::exception &ex)
    {
        std::cout << ex.what();
    }

    std::cout << "\n";

    return 0;
}


