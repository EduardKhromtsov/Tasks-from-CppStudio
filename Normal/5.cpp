/*Необходимо создать структуру, которая содержит элемент типа int и строку.
Объявить указатель типа структуры(объект структуры) и выделить память для хранения данных одной структуры.
Предложить пользователю внести данные и записать их в элементы объекта структуры.
Далее пользователю необходимо сделать выбор: внести еще данные (создать еще один объект структуры) либо выйти из программы.
Если пользователь продолжает ввод — необходимо выделить новую память для указателя на объект структуры и дописать в нее введенные пользователем новые данные.
Цикл выделения новой памяти продолжается, пока пользователь не выберет выход из программы.*/

#include <iostream>
#include <string>

struct Human
{
    std::string sName;
    unsigned short iAge;
};

void push_back(Human*& Obj, int& Size)
{
    Human* NewArray = new Human[Size + 1];

    for (int i = 0; i < Size; ++i)
    {
        NewArray[i] = Obj[i];
    }

    ++Size;

    delete[] Obj;

    Obj = NewArray;
}

int main()
{
    setlocale(LC_ALL, "RU");

    int iSize = 1, iChoice = 0;

    Human* People = new Human[iSize];

    do
    {
        if (iChoice == 0)
        {

        }
        else if (iChoice == 1)
        {
            push_back(People, iSize);
        }

        std::cout << "Имя: ";
        std::cin >> People[iSize - 1].sName;
        std::cout << "Возраст: ";
        std::cin >> People[iSize - 1].iAge;
        std::cout << "\n";

        for (int i = 0; i < iSize; ++i)
        {
            std::cout << i << " элемент динамического массива структур: " << People[i].sName << " " << People[i].iAge << ";" << "\n";
        }

        std::cout << "\nВнести еще данные - 1, выход - 0: ";
        std::cin >> iChoice;

    } while (iChoice != 0 && iChoice == 1);


    delete[] People;
}


