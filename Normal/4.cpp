/*Задача на динамическое выделение памяти.Изначально есть указатель на массив с одним элементом.
Пользователь вводит число. Если оно больше 0 записываем его в массив.Далее пользователь вводит второе число, тут уже, если оно больше 0, надо 
перевыделять память для 2-х элементов массива и записать в массив второе число. И так далее…  для 3-х элементов, для 4-х…  
пока пользователь не введет отрицательное число.*/

#include <iostream>

void ShowArray(const int* const pArr, const int Size)
{ 
    for (int i = 0; i < Size; ++i)
    {
        std::cout << pArr[i] << " ";
    }
}

void push_back(int*& pArr, int& Size, const int Value)
{
    int* pNewArray = new int[Size + 1];

    for (int i = 0; i < Size; ++i)
    {
        pNewArray[i] = pArr[i];
    }

    pNewArray[Size] = Value;

    ++Size;

    delete[] pArr;

    pArr = pNewArray;
}

int main()
{
    setlocale(LC_ALL, "RU");

    int iNumber, iSize = 1;

    int* pArray = new int[iSize];

    for (int i = 0;;++i)
    {
        std::cout << "\nВведите целое число: ";
        std::cin >> iNumber;

        if (i == 0 && iNumber >= 0)
        {
            pArray[i] = iNumber;
            ShowArray(pArray, iSize);
        }
        else if (i > 0 && iNumber >= 0)
        {
            push_back(pArray, iSize, iNumber);
            ShowArray(pArray, iSize);
        }
        else if (iNumber < 0)
        {
            break;
        }
    }
    
    delete[] pArray;
}


