// Используя оператор цикла do while, составить программу, которая будет требовать ввод цифр с клавиатуры до тех пор, пока не будет введена цифра 1.

#include <iostream>

int main()
{
    setlocale(LC_ALL, "RU");

    int iNumber;

    do
    {
        std::cout << "Введите число: ";
        std::cin >> iNumber;
    } while (iNumber != 1);

}


