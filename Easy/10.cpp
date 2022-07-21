// Вычислить значение выражения по формуле(все переменные принимают действительные значения): (1 - tg x) ^ (ctg x) + cos(x - y).

#include <iostream>
#include <cmath>
#include <iomanip>

int main()
{
    setlocale(LC_ALL, "RU");

    const double PI = 3.141592;
    double dX, dY;

    std::cout << "Введите значение X: ";
    std::cin >> dX;

    std::cout << "Введите значение Y: ";
    std::cin >> dY;

    dX = dX / 180 * PI;
    dY = dY / 180 * PI;

    std::cout << "Ответ: " << std::fixed << std::setprecision(2) << pow(1 - tan(dX), (cos(dX) / sin(dX))) + cos(dX - dY) << std::endl;
}

