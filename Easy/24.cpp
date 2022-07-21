// Вычислить сумму 1 / sin1 + 1 / (sin1 + sin2) + …1 / (sin1 + … + sinn), где n — заданное натуральное число.

#include <iostream>
#include <cmath>

double SumSin(const int iN)
{
    const double PI = 3.1415926535;

    double dTempSum = 0;

    for (int i = 1; i <= iN; ++i)
    {
        dTempSum += sin(i * PI / 180);
    }

    return dTempSum;
}

int main()
{
    setlocale(LC_ALL, "RU");

    int iNumber;
    double dSum = 0;
    const float PI = 3.141592;

    std::cout << "Введите N: ";
    std::cin >> iNumber;

    for (int i = 1; i <= iNumber; ++i)
    {
        dSum += 1 / SumSin(i);
    }

    std::cout << "Сумма = " << dSum << "\n";
}


