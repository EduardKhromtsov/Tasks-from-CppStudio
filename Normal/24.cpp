// Дана строка символов. Строка состоит из слов, которые отделены друг от друга пробелами. Вывести самое длинное слово и его порядковый номер.

#include <iostream>
#include <string>
#include <sstream>
#include <Windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    string sStr, sString, sWord;

    int iMaxValue, iCounter = 1, iNumber = 1;

    cout << "Введите строку: ";
    getline(cin, sStr);

    std::stringstream ss(sStr);

    ss >> sString;
    sWord = sString;

    iMaxValue = sString.length();

    while (!ss.eof())
    {
        ss >> sString;
        ++iCounter;

        if (sString.length() > iMaxValue)
        {
            sWord = sString;
            iMaxValue = sString.length();
            iNumber = iCounter;
        }
    }

    cout << "Самое длинное слово под номером " << iNumber << ": " << sWord << "\n";
}

