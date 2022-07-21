/*Составить алгоритм увеличения всех трех, введённых с клавиатуры, переменных на 5, если среди них есть хотя бы две равные.
В противном случае выдать ответ «равных нет».*/

#include <iostream>

int main()
{
    setlocale(LC_ALL, "RU");

    int iFirstNumber, iSecondNumber, iThirdNumber;

    std::cout << "Введите первое число: ";
    std::cin >> iFirstNumber;

    std::cout << "Введите второе число: ";
    std::cin >> iSecondNumber;

    std::cout << "Введите третье число: ";
    std::cin >> iThirdNumber;

    if (iFirstNumber == iSecondNumber || iFirstNumber == iThirdNumber || iSecondNumber == iThirdNumber)
    {
        iFirstNumber += 5;
        iSecondNumber += 5;
        iThirdNumber += 5;

        std::cout << "Первое число: " << iFirstNumber << ", " << "Второе число: " << iSecondNumber << ", " << "Третье число: " << iThirdNumber << "." << std::endl;
    }
    else
    {
        std::cout << "Равных чисел нет." << std::endl;
    }
}


