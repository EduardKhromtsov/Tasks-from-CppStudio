/*Напишите программу, которая позволяет пользователю ввести в консоли латинскую букву нижнего регистра, 
переводит её в верхний регистр и результат выводит в консоль.*/

#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    char cLetter;
    cout << "Enter a lowercase letter: ";
    cin >> cLetter;

    cout << "Uppercase letter: " << unsigned char(toupper(cLetter)) << endl;
}

