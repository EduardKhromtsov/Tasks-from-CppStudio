/*Описать функцию аddRightDigit(d, k), которая должна добавлять к целому положительному числу К справа цифру D 
(D — целочисленное значение в диапазоне 0 - 9, К — целочисленное значение, которое является одновременно входным параметром и модифицируемым значением).
С помощью этой функции добавить к данному числу К цифры D1 и D2, выводя результат каждого добавления.*/

#include <iostream>

void AddRightDigit(int iD, int &iK)
{
    int iPow = 10;

    while (iD >= iPow)
    {
        iPow *= 10;
    }

    iK = iK * iPow + iD;
}

int main()
{
    setlocale(LC_ALL, "RU");

    int iNumberK, iNumberD;

    std::cout << "Введите число k: ";
    std::cin >> iNumberK;

    std::cout << "Введите число d (в диапазоне от 0 до 9): ";
    std::cin >> iNumberD;

    AddRightDigit(iNumberD, iNumberK);

    std::cout << "k = " << iNumberK << "\n";

    std::cout << "Введите второе число d (в диапазоне от 0 до 9): ";
    std::cin >> iNumberD;

    AddRightDigit(iNumberD, iNumberK);

    std::cout << "k = " << iNumberK << "\n"; 
}

