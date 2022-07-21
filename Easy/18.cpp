// Написать программу преобразования десятичного числа в шестнадцатеричное.

#include <iostream>

int main()
{
    setlocale(LC_ALL, "RU");

    int iNumber;

    std::cout << "Введите число: ";
    std::cin >> iNumber;

    std::cout << "Шестнадцатеричная форма записи числа " << iNumber << " = " << std::showbase << std::hex << iNumber << "\n";
}

