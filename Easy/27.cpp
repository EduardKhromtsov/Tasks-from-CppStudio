// С помощью оператора цикла for, разработать программу, которая будет выводить таблицу умножения введенного пользователем числа с клавиатуры.

#include <iostream>

int main()
{
    setlocale(LC_ALL, "RU");

    int iNumber;

    std::cout << "Введите число: ";
    std::cin >> iNumber;
    std::cout << "\n";

    for (int i = 1; i <= 10; ++i)
    {
        std::cout << i << " * " << iNumber << " = " << iNumber * i << "\n";
    }
}


