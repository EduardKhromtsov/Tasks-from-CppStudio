/*Программа должна выполнять преобразования строки (длина строки 255 символов):
1. СТРОКА ЗАГЛАВНЫМИ БУКВАМИ.
2. строка в нижнем регистре.
3. С Заглавной Буквы (Первый Символ Каждого Слова В Строке).
4. пЕРВЫЙ сИМВОЛ в нИЖНЕМ рЕГИСТРЕ.
5. Как в предложении(с заглавной буквы).
6. Символ 'f' — выход из программы.
Организовать в программе меню, через которое можно удобно выбирать любое действие. Программа должна выполняться пока пользователь не введет символ 'f'.*/

#include <iostream>

void Menu(char &Symbol);
void Operation1(char *Str);
void Operation2(char *Str);
void Operation3(char *Str);
void Operation4(char *Str);
void Operation5(char *Str);

int main()
{
    setlocale(LC_ALL, "RU");

    char cString[255], cSymbol;

    std::cout << "Введите строку: ";
    std::cin.getline(cString, 255);

    do
    {
        std::cout << cString << "\n";

        Menu(cSymbol);

        if (cSymbol == 'f')
            continue;

        if (cSymbol != '1' && cSymbol != '2' && cSymbol != '3' && cSymbol != '4' && cSymbol != '5')
        {
            std::cout << "Неправильно выбран пункт, повторите попытку." << "\n";
            continue;
        }

        if (cSymbol == '1')
            Operation1(cString);
        if (cSymbol == '2')
            Operation2(cString);
        if (cSymbol == '3')
            Operation3(cString);
        if (cSymbol == '4')
            Operation4(cString);
        if (cSymbol == '5')
            Operation5(cString);

    } while (cSymbol != 'f');

}

void Menu(char &Symbol)
{
    std::cout << "Для преобразования строки в заглавные буквы выберите пункт 1" << "\n";
    std::cout << "Для преобразования строки в нижний регистр выберите пункт 2" << "\n";
    std::cout << "Для преобразования строки с Заглавной Буквы выберите пункт 3" << "\n";
    std::cout << "Для преобразования строки в первый символ в нижнем регистре выберите пункт 4" << "\n";
    std::cout << "Для преобразования строки в как обычном предложении выберите пункт 5" << "\n";
    std::cout << "Для выхода выберите пункт f" << "\n\n";

    std::cout << "Выберите необходимое действие: ";
    std::cin >> Symbol;
    std::cout << "\n";
}

void Operation1(char *Str)
{
    for (int i = 0; i < strlen(Str); ++i)
    {
        if (Str[i] != ' ')
            Str[i] = toupper(Str[i]);
        else
            continue;
    }
}

void Operation2(char *Str)
{
    for (int i = 0; i < strlen(Str); ++i)
    {
        if (Str[i] != ' ')
            Str[i] = tolower(Str[i]);
        else
            continue;
    }
}

void Operation3(char *Str)
{
    *Str = toupper(*Str);

    bool bSwitch = false;

    for (int i = 1; i < strlen(Str); ++i)
    {   
        if (Str[i] == ' ')
        {
            bSwitch = true;
            continue;
        }

        if (bSwitch)
        {
            Str[i] = toupper(Str[i]);
            bSwitch = false;
            continue;
        }

        Str[i] = tolower(Str[i]);
    }
}

void Operation4(char *Str)
{
    *Str = tolower(*Str);

    bool bSwitch = false;

    for (int i = 1; i < strlen(Str); ++i)
    {
        if (Str[i] == ' ')
        {
            bSwitch = true;
            continue;
        }

        if (bSwitch)
        {
            Str[i] = tolower(Str[i]);
            bSwitch = false;
            continue;
        }

        Str[i] = toupper(Str[i]);
    }
}

void Operation5(char *Str)
{
    int i;

    for (i = 0; i < strlen(Str); ++i)
    {
        if (Str[i] == ' ')
            continue;
        else
        {
            Str[i] = toupper(Str[i]);
            ++i;
            break;
        }
    }

    for (; i < strlen(Str); ++i)
    {
        if (Str[i] == ' ')
            continue;
        else
            Str[i] = tolower(Str[i]);
    }
}

