/*Составить программу табулирования функции y = ctg^2lnx на интервале [a, b] с шагом h, 
на языке программирования С++ в среде разработки MVS2010, в консоли.*/

#include <iostream>
#include <cmath>
#include <iomanip>

int main()
{
    setlocale(LC_ALL, "RU");

    float dMinimumValue = 0.05;
    float dMaximumValue = 0.55;
    float dStep = 0.1;

    std::cout << "y = ";

    while (dMinimumValue <= dMaximumValue)
    {
        std::cout << std::setprecision(3) << pow(cos(log(dMinimumValue)) / sin(log(dMinimumValue)), 2) << "; ";
        dMinimumValue += dStep;
    }

    std::cout << "\n";
}


