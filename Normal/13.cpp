/*Время задается в формате час, минута, секунда. Реализовать:
1) вычитание из времени указанного пользователем количества секунд;
2) подсчёт числа секунд между двумя моментами времени, лежащими в пределах одних суток.*/

#include <iostream>
#include <cassert>

struct Time
{
    unsigned short iHours, iMinutes, iSeconds;
};

Time FillTime()
{
    Time T;
    std::cout << "Введите значения времени!" << "\n";

    std::cout << "Часы: ";
    std::cin >> T.iHours;
    assert(T.iHours >= 0 && T.iHours <= 24);

    std::cout << "Минуты: ";
    std::cin >> T.iMinutes;
    assert(T.iMinutes >= 0 && T.iMinutes < 60);

    std::cout << "Секунды: ";
    std::cin >> T.iSeconds;
    assert(T.iSeconds >= 0 && T.iSeconds < 60);

    return T;
}

int main()
{
    setlocale(LC_ALL, "RU");

    int iNumSeconds, iResult, iAnotherResult;

    Time TimeValue = FillTime();

    std::cout << "Введите количество секунд: ";
    std::cin >> iNumSeconds;

    iResult = (TimeValue.iHours * 3600) + (TimeValue.iMinutes * 60) + TimeValue.iSeconds;
    assert(iResult >= iNumSeconds);

    iResult -= iNumSeconds;

    std::cout << "Оставшееся время: " << iResult / 3600 << ":" << (iResult % 3600) / 60 << ":" << (iResult % 3600 % 60) << "\n";

    Time TimeValue1 = FillTime();

    std::cout << "Введите второй момент времени." << "\n";

    Time TimeValue2 = FillTime();

    iResult = (TimeValue1.iHours * 3600) + (TimeValue1.iMinutes * 60) + TimeValue1.iSeconds;

    iAnotherResult = (TimeValue2.iHours * 3600) + (TimeValue2.iMinutes * 60) + TimeValue2.iSeconds;

    if (iAnotherResult > iResult)
    {
        std::cout << "Количество секунд между введенными моментами времени: " << iAnotherResult - iResult << "\n";
    }
    else
    {
        std::cout << "Количество секунд между введенными моментами времени: " << iResult - iAnotherResult << "\n";
    }


}

