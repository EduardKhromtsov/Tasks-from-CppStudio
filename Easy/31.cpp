/*С помощью цикла while разработать программу, которая будет вычислять сумму чисел нацело делящихся на 5. 
Цикл задать от 0 до введенного с клавиатуры числа.*/

#include <iostream>

int main()
{
    setlocale(LC_ALL, "RU");

    int iNumber, iSum = 0;

    std::cout << "Введите последнее число последовательности: ";
    std::cin >> iNumber;

    std::cout << "Сумма чисел делящихся на 5 из последовательности [0, " << iNumber << "]" << " равна ";

    while (0 <= iNumber)
    {
        if (iNumber % 5 == 0)
        {
            iSum += iNumber;
        }
        --iNumber;
    }

    std::cout << iSum << "\n";

}


