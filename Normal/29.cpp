/*Разработать программу, выполняющую обработку строки.
Обработка строки должна осуществляться посимвольно (использование функций форматированного вывода  scanf() и sscanf() не допускается).
Найти сумму целых чисел, перечисленных в исходной строке через запятую.Ввод исходной строки осуществляется с клавиатуры.*/

#include <iostream>

int main()
{
    setlocale(LC_ALL, "RU");

    char cString[100];

    char cTemp[100];

    int iSum = 0, i = 0, j = 0;

    std::cout << "Введите строку чисел (числа отделяются друг от друга запятой): ";
    std::cin.getline(cString, 100);

    while (i < strlen(cString) + 1)
    {
        if (cString[i] != ',' && cString[i] != '\0')
        {
            cTemp[j] = cString[i];
            ++j;
        }
        else
        {
            cTemp[j] = '\0';
            iSum += atoi(cTemp);
            memset(&cTemp[0], 0, sizeof(cTemp));
            j = 0;
        }
        ++i;
    }

    std::cout << "Сумма чисел = " << iSum << "\n";
}


