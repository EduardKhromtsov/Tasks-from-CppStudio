/*По заданному вещественному x, вычислить корень кубический из x по следующей итерационной формуле:
y(i + 1) = 0.5 (y(i) + 3 x / (2 y(i)^2 + x / y(i)).
Начальное приближение y(0)=x. Итерации прекратить при |yi+1-yi|<10^-5. Смысл данного задания — найти корень кубический без использования специальных функций.*/

#include <iostream>
#include <cmath>

int main()
{
    setlocale(LC_ALL, "RU");

    double dYi, dYi1, dX;

    std::cout << "Введите x: ";
    std::cin >> dX;

    dYi = dX;
    dYi1 = 0;

    while (true)
    {
        dYi1 = 0.5 * (dYi + 3 * dX / (2 * pow(dYi, 2) + dX / dYi));

        if (abs(dYi1 - dYi) < pow(10, -5))
            break;

        dYi = dYi1;
    }

    std::cout << dYi << "\n";
}


