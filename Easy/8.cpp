/*Вычислить, не используя функцию pow, значения функции z(x, m) = x^m sin^m(xm), для значений аргументов:
x от - 1.1 до 0.3 с шагом 0.2;
m от 1 до 5 с шагом 1.
При решении данной задачи просто найдите способ обойтись без функции pow.*/

#include <iostream>
#include <cmath>

double MyPow(const double dNumber, const double dPower)
{
    double dResult;

    if (dPower == 0)
    {
        dResult = 1;
    }
    else
    {
        dResult = dNumber;

        for (int i = 1; i < dPower; ++i)
        {
            dResult = dResult * dNumber;
        }
    }

    return dResult;
}

int main()
{
    setlocale(LC_ALL, "RU");

    double dX = -1.1;
    int iM = 1;

    while (dX < 0.3)
    {
        while (iM != 5)
        {
            std::cout << "Значение функции = " << MyPow(dX,iM) * MyPow(sin(dX*iM),iM) << " при m = " << iM << std::endl;
            iM += 1;
        }

        std::cout << "Вычислено при x = " << dX << std::endl;
        iM = 1;
        dX += 0.2;
    }
       
}


