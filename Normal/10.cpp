// Подсчитать количество повторений элементов, заданного множества символов, во введенной строке.

#include <iostream>
#include <string>

int main()
{
    setlocale(LC_ALL, "RU");

    unsigned short int iCounter = 1;

    std::string sString;
    
    std::cout << "Введите строку: ";
    std::getline(std::cin, sString);

    
    for (int i = 0; i < sString.size(); ++i)
    {
        for (int j = 0; j < sString.size(); ++j)
        {
            if (j != i && sString[i] == sString[j])
                ++iCounter;
        }
        std::cout << sString[i] << " = " << iCounter << "\n";
        iCounter = 1;
    }
}


