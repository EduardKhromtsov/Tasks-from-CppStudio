/*Напишите программу, которая позволяет пользователю ввести в консоль три координаты вектора x, y, и z, с основанием у начала координат.
Вычислите длину этого вектора и выведите её обратно в консоль.*/

#include <iostream>
#include <cmath>

double VectorLength(const double dValueX, const double dValueY, const double dValueZ)
{
    return sqrt(pow(dValueX, 2) + pow(dValueY, 2) + pow(dValueZ, 2));
}

int main()
{
    setlocale(LC_ALL, "RU");

    double dX, dY, dZ;

    std::cout << "Введите X: ";
    std::cin >> dX;

    std::cout << "Введите Y: ";
    std::cin >> dY;

    std::cout << "Введите Z: ";
    std::cin >> dZ;

    std::cout << "Длина вектора: " << VectorLength(dX, dY, dZ) << std::endl;
}


