/*Организовать ввод строки, каждое слово в строке отделяется от других слов пробелами, их может быть неограниченное количество. 
Найти самое короткое слово в строке.*/

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

    int iMinValue;

    cout << "Введите строку: ";
    getline(cin, sStr);

    std::stringstream ss(sStr);

    ss >> sString;
    sWord = sString;

    iMinValue = sString.length();

    while (!ss.eof())
    {
        ss >> sString;

        if (sString.length() < iMinValue)
        {
            sWord = sString;
            iMinValue = sString.length();
        }
    }

    cout << "Результат: " << sWord << "\n";

}


