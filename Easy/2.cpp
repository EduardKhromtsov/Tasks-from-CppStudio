// Найти алгебраическую сумму для выражения : 1k + 2k + 3k + … + Nk.N и степень k вводит пользователь.

#include <iostream>

int Sum(const int Num, const int Pow)
{
    int iResult = 0;

    for (int i = 1; i <= Num; ++i)
    {
        iResult += pow(i, Pow);
    }

    return iResult;
}

int main()
{
    setlocale(LC_ALL, "RU");

    int iNumber, iPower;

    std::cout << "Введите N: ";
    std::cin >> iNumber;

    std::cout << "Введите степень k: ";
    std::cin >> iPower;

    std::cout << "Сумма: " << Sum(iNumber, iPower) << "\n\n";
}

