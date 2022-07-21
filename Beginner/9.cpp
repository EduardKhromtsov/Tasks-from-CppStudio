/*Составить программу, которая требует ввести два числа. Если первое число больше второго, то программа печатает слово больше.
Если первое число меньше второго, то программа печатает слово меньше. А если числа равны, программа напечатает сообщение Эти числа равны.*/

#include <iostream>

int main()
{
    setlocale(LC_ALL, "RU");

    std::cout << "Сравнение чисел, используя оператор ветвления" << "\n\n";

    int iFirstNumber, iSecondNumber;

    std::cout << "Введите 1 число: ";
    std::cin >> iFirstNumber;

    std::cout << "Введите 2 число: ";
    std::cin >> iSecondNumber;

    if (iFirstNumber < iSecondNumber)
    {
        std::cout << "Первое число меньше второго." << std::endl;
    }
    else if (iFirstNumber > iSecondNumber)
    {
        std::cout << "Первое число больше второго." << std::endl;
    }
    else if (iFirstNumber == iSecondNumber)
    {
        std::cout << "Числа равны." << std::endl;
    }
}
