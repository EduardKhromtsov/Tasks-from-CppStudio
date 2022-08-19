// Поменять согласные буквы на гласные во введенной пользователем строке, а гласные — на соответствующий ASCII код, используя функции.

#include <iostream>
#include <ctime>

void Search(const char *const Str, const int iSize);

int main()
{
    srand(time(NULL));

    char cString[100];

    std::cout << "Enter the string of characters: ";
    std::cin.getline(cString, 100);

    std::cout << "Result: ";
    
    Search(cString, strlen(cString));

    return 0;
}

void Search(const char *const Str, const int iSize)
{
    const char *cVowels = "AEIOUYaeiouy";
    const char *cConsonants = "BCDFGHJKLMNPQRSTVWXZbcdfghjklmnpqrstvwxz";

    for (int i = 0; i < iSize; ++i)
    {
        if (Str[i] == ' ')
        {
            std::cout << " ";
            continue;
        }

        if (strchr(cConsonants, Str[i]) == NULL)
            std::cout << int(Str[i]) << " ";
        else
            std::cout << cVowels[rand() % 12] << " ";
    }
    std::cout << "\n";
}

