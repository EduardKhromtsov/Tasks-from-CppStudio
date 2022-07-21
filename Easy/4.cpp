// 4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>

int main()
{
    setlocale(LC_ALL, "RU");

    double dV, dT, dResult;

    const double PI = 3.1415926535;
    const double G = 9.8;

    std::cout << "Введите скорость V: ";
    std::cin >> dV;

    std::cout << "Время полета тела: ";
    std::cin >> dT;

    dResult = asin((G * dT) / (2 * dV));
    
    std::cout << "Угол: " << dResult * 180 / PI << "\n\n";
}


