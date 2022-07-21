/*Напишите программу, которая должна определить, пройдет ли кирпич в отверстие. Размеры отверстия(длина и высота) вводит пользователь.
То же самое касается габаритов кирпича, пользователь вводит в программу значения длины, ширины и высоты кирпича.*/

#include <iostream>

int main()
{
    setlocale(LC_ALL, "RU");

    unsigned short int iHoleLength, iHoleHeight;
    unsigned short int iBrickLength, iBrickWidth, iBrickHeight;

    std::cout << "Введите длину кирпича: ";
    std::cin >> iBrickLength;

    std::cout << "Введите ширину кирпича: ";
    std::cin >> iBrickWidth;

    std::cout << "Введите высоту кирпича: ";
    std::cin >> iBrickHeight;

    std::cout << "-------------------------" << std::endl;

    std::cout << "Введите длину отверстия: ";
    std::cin >> iHoleLength;

    std::cout << "Введите высоту отверстия: ";
    std::cin >> iHoleHeight;

    std::cout << "-------------------------" << std::endl;

    if (iHoleLength >= iBrickLength && iHoleHeight >= iBrickHeight)
    {
        std::cout << "Кирпич спокойно пройдет в отверстие." << std::endl;
    }
    else if (iHoleHeight >= iBrickWidth && iHoleLength >= iBrickHeight)
    {
        std::cout << "Кирпич сможет пройти в отверстие, но его нужно будет перевернуть." << std::endl;
    }
    else if (iHoleHeight >= iBrickHeight && iHoleLength >= iBrickWidth)
    {
        std::cout << "Кирпич сможет пройти в отверстие, но его нужно будет перевернуть." << std::endl;
    }
    else
    {
        std::cout << "Кирпич не сможет пройти в отверстие." << std::endl;
    }
   

}


