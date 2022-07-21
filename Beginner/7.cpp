// Используя один оператор вывода cout, программа должна напечатать прямоугольный треугольник из символов знака плюс +.

#include <iostream>

int main()
{
    for (char i = 1; i < 8; ++i)
    {
        for (char j = 0; j < i; ++j)
        {
            std::cout << "+";
        }
        std::cout << std::endl;
    }

    std::cout << std::endl;

}


