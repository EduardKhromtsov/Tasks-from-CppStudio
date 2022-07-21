// Составить программу, которая будет печатать ромб одним из значков (* или + или #) Выбор значков организовать оператором switch.

#include <iostream>

void PrintRhomb(const short iH, const short iW, const char cCharacter)
{
    int iPosition = 0;

    for (int i = 1; i <= iH; ++i)
    {
        for (int j = 1; j <= iW; ++j)
        {
            if ((j == (iW / 2 + 1 + iPosition)) || (j == (iW / 2 + 1 - iPosition)))
            {
                std::cout << cCharacter;
            }
            else
            {
                std::cout << " ";
            }
        }
        std::cout << "\n";

        if (i < iH / 2 + 1)
        {
            ++iPosition;
        }
        else
        {
            --iPosition;
        }
    }
}

int main()
{
    setlocale(LC_ALL, "RU");

    unsigned short int iChoice;
    short int iHeight;
    short int iWidth;
    char cSymbol;

    std::cout << "Введите 1 для печати ромба '*'" << "\n";
    std::cout << "Введите 2 для печати ромба '+'" << "\n";
    std::cout << "Введите 3 для печати ромба '#'" << "\n";
    
    std::cout << "Пожалуйста, введите число от 1 до 3 включительно: ";
    std::cin >> iChoice;

    switch (iChoice)
    {
    case 1: 
        cSymbol = '*';
        break;
    case 2:
        cSymbol = '+';
        break;
    case 3:
        cSymbol = '#';
        break;
    default:
        std::cout << "Введеное некорректное число." << "\n";
        exit(0);
    }

    std::cout << "Необходимо ввести только положительные нечетные числа, иначе ромб не построится." << "\n";
    
    std::cout << "Введите высоту ромба: ";
    std::cin >> iHeight;
    
    std::cout << "Введите ширину ромба: ";
    std::cin >> iWidth;

    if (((iHeight % 2 == 0) || (iWidth % 2 == 0)) || (iHeight <= 0 || iWidth <= 0))
    {
        std::cout << "Введеные некорректные числа высоты и ширины ромба." << "\n";
        exit(0);
    }
    else
    {
        PrintRhomb(iHeight, iWidth, cSymbol);
    }


}


