/*С помощью цикла while разработать программу, которая будет вычислять сумму чисел нацело делящихся на 5. 
Цикл задать от 0 до введенного с клавиатуры числа.*/

#include <iostream>

int main()
{
    setlocale(LC_ALL, "RU");

    int iCounter, iSum = 0;

    std::cout << "Введите правую границу интервала чисел: ";
    std::cin >> iCounter;

    while (0 <= iCounter)
    {
        if (iCounter % 5 == 0)
        {
            iSum += iCounter;
        }

        --iCounter;
    }

    std::cout << "Сумма чисел нацело делящихся на 5 = " << iSum << "\n";
}

