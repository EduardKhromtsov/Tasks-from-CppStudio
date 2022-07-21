/*Составить программу, которая на входе должна получать последовательность цифр, 
после чего программа показывает цифру, порядковый номер которой ввел пользователь.*/

#include <iostream>

int main()
{
    setlocale(LC_ALL, "RU");

    char cNumber [15];

    short int iChoice;

    std::cout << "Введите числовую последовательность: ";
    std::cin >> cNumber;

    std::cout << "Введите порядковый номер цифры: ";
    std::cin >> iChoice;

    if (iChoice <= 0 || iChoice > strlen(cNumber))
    {
        std::cout << "Введен некорректный порядковый номер." << "\n";
        exit(0);
    }

    std::cout << "k-я цифра последовательности: " << cNumber[iChoice - 1] << "\n";
}


