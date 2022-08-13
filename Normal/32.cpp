// Дана строка символов, которая обязательно заканчивается символом точки. Удалить из строки первые буквы каждого слова.

#include <iostream>
#include <string>

int main()
{
    setlocale(LC_ALL, "RU");

    char cString[100], cResultString[100], cSymbol;

    int iNumber = 0, j = 0;

    bool bSwitch = true;

    std::cout << "Введите строку с точкой на конце: ";

    do
    {
        cSymbol = getchar();
        cString[iNumber] = cSymbol;
        ++iNumber;
    } while (cSymbol != '.');

    std::cout << "Результат: ";

    for (int i = 0; i < iNumber; ++i)
    {
        if (bSwitch)
        {
            cString[i] = '\0';
            bSwitch = false;
            continue;
        }

        if (cString[i] == ' ')
            bSwitch = true;

        if (cString[i] != '\0')
        {
            cResultString[j] = cString[i];
            ++j;
        }
    }

    for (int i = 0; i < j; ++i)
    {
        std::cout << cResultString[i];
    }

    std::cout << "\n";
}


