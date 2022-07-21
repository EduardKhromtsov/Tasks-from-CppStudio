// Запрограммировать генератор псевдослучайных чисел, используя конгруэнтный метод формирования псевдослучайных чисел.

#include <iostream>

double Congruential(int &);

int main()
{
    setlocale(LC_ALL, "RU");

    const int NUMBER_OF_NUMBERS = 25;
    int iX = 2;

    std::cout << "Псевдослучайные числа: ";

    for (int i = 0; i <= NUMBER_OF_NUMBERS; ++i)
    {
        std::cout << Congruential(iX) << " ";
    }

    std::cout << "\n\n";
}

double Congruential(int& iXRef)
{
    const int M = 100, A = 8, INC = 65;

    iXRef = ((A * iXRef) + INC) % M;

    return (iXRef / double(M));

}


