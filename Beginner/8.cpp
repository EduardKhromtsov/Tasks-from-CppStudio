/*Напишите программу, запрашивающую имя, фамилия, отчество и номер группы студента и выводящую введённые данные в следующем виде:
   ********************************
   * Лабораторная работа № 1      *
   * Выполнил(а): ст. гр. ЗИ-123  *
   * Иванов Андрей Петрович       *
   ******************************** 
Необходимо, чтобы программа сама определяла нужную длину рамки.
Сама же длина рамки зависит от длины наибольшей строки внутри рамки. Используя циклы for легко можно выровнять стороны рамки.*/

#include <iostream>
#include "windows.h"

int main()
{
    setlocale(LC_ALL, "RU");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    char cName[20];
    char сSurname[30];
    char cPatronymic[30];
    char cGroupNumber[30];

    const int STR_LENGTH = 30; // Минимальная длина рамки
    int iStrLength1; // Длина первой строки
    int iStrLength2; // Длина второй строки
    int iMaxValue;

    std::cout << "Введите имя студента: ";
    std::cin >> cName;

    std::cout << "Введите фамилию студента: ";
    std::cin >> сSurname;

    std::cout << "Введите отчество студента: ";
    std::cin >> cPatronymic;

    std::cout << "Введите номер группы студента: ";
    std::cin >> cGroupNumber;

    iStrLength1 = 25 + strlen(cGroupNumber);
    iStrLength2 = 6 + strlen(cName) + strlen(сSurname) + strlen(cPatronymic);

    if (STR_LENGTH > iStrLength1 && STR_LENGTH > iStrLength2)
    {
        iMaxValue = STR_LENGTH;
    }
    else
    {
        if (iStrLength1 > iStrLength2)
        {
            iMaxValue = iStrLength1;
        }
        else
        {
            iMaxValue = iStrLength2;
        }
    }

    std::cout << std::endl;

    for (char i = 0; i < 5; ++i)
    {
        if (i == 0 || i == 4)
        {
            std::cout << "\t";

            for (char j = 0; j < iMaxValue; ++j)
            {
                std::cout << "*";
            }
        }

        if (i == 1)
        {
            for (char k = 0; k < (iMaxValue - 25); ++k)
            {
                if (k == 0)
                {
                    std::cout << "\t" << "*" << " Лабораторная работа № 1";
                }
                else
                {
                    std::cout << " ";
                }
            }
            std::cout << "*";
        }

        if (i == 2)
        {
            for (char g = 0; g < (iMaxValue - (strlen(cGroupNumber) + 23)); ++g)
            {
                if (g == 0)
                {
                    std::cout << "\t" << "*" << " Выполнил(а): ст. гр. " << cGroupNumber;
                }
                else
                {
                    std::cout << " ";
                }
            }  
            std::cout << "*";
        }

        if (i == 3)
        {
            for (char t = 0; t < (iMaxValue - 4 - strlen(сSurname) - strlen(cName) - strlen(cPatronymic)); ++t)
            {
                if (t == 0)
                {
                    std::cout << "\t" << "* " << сSurname << " " << cName << " " << cPatronymic;
                }
                else
                {
                    std::cout << " ";
                }
            }
            std::cout << "*";
        }

        std::cout << std::endl;
    }  
}


