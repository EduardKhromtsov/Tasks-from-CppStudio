/*Найти Y, если Y = X1 + X2 + … + Xn, X = Z ^ 3 - B + A ^ 2 / tg ^ 2?.
Количество X вводятся пользователем программы. Для каждого X значения Z, B, А, ? разные (вводятся пользователем программы).*/

#include <iostream>
#include <math.h>

void FillArray(float* const fArr, const int SIZE)
{
    float fZ, fB, fA, fBetta;

    for (int i = 0; i < SIZE; ++i)
    {
        std::cout << "Введите значения Z, B, A, Betta для X" << (i + 1) << std::endl;
       
        std::cout << "Z = ";
        std::cin >> fZ;
        
        std::cout << "B = ";
        std::cin >> fB;

        std::cout << "A = ";
        std::cin >> fA;

        std::cout << "Betta = ";
        std::cin >> fBetta;

        fArr[i] = pow(fZ, 3) - fB + pow(fA, 2) / pow(tan(fBetta), 2);
    }
}

int main()
{
    setlocale(LC_ALL, "RU");
    
    int iSize;
    float fResult = 0;

    std::cout << "Введите количество Xов: ";
    std::cin >> iSize;

    float* fArray = new float[iSize];

    FillArray(fArray, iSize);
    
    for (int i = 0; i < iSize; ++i)
    {
        fResult += fArray[i];
    }

    std::cout << "\n";

    std::cout << "Y = " << fResult << "\n\n";

    delete[] fArray;
   
}
