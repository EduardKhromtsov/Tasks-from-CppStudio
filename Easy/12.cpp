// Определить номер четверти плоскости, в которой находится точка с координатами X и Y, причем XY != 0. Координаты вводить с клавиатуры.

#include <iostream>

int main()
{
    setlocale(LC_ALL, "RU");

    int iX, iY;

    std::cout << "Введите координату X: ";
    std::cin >> iX;

    std::cout << "Введите координату Y: ";
    std::cin >> iY;

    if (iX > 0 && iY > 0)
    {
        std::cout << "I четверть плоскости." << std::endl;
    }
    else if (iX < 0 && iY > 0)
    {
        std::cout << "II четверть плоскости." << std::endl;
    }
    else if (iX < 0 && iY < 0)
    {
        std::cout << "III четверть плоскости." << std::endl;
    }
    else if (iX > 0 && iY < 0)
    {
        std::cout << "IV четверть плоскости." << std::endl;
    }
    else if (iX == 0 && iY == 0)
    {
        std::cout << "Центр плоскостей." << std::endl;
    }
}

