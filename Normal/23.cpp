/*Результаты соревнований по прыжкам в длину представлены в виде матрицы 5х3 (5 спортсменов по 3 попытки у каждого).
Указать, какой спортсмен и в какой попытке показал наилучший результат.*/

#include <iostream>

void FillArray(float fArr[5][3])
{
    for (int i = 0; i < 5; ++i)
    {
        std::cout << "Для " << i + 1 << " спортсмена: ";
        
        std::cin >> fArr[i][0] >> fArr[i][1] >> fArr[i][2];
    }
}

void SearchBestResult(float fArr[5][3], float& fScore)
{
    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            if (fScore < fArr[i][j])
            {
                fScore = fArr[i][j];
            }
        }
    }
}

int main()
{
    setlocale(LC_ALL, "RU");

    float fArray[5][3];

    float fBestScore = 0.0;

    std::cout << "Введите результаты соревнований: " << "\n";
    
    FillArray(fArray);
    
    SearchBestResult(fArray, fBestScore);

    std::cout << "\nЛучший результат у спортсменов: " << "\n";
    
    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            if (fBestScore == fArray[i][j])
            {
                std::cout << "№ спортсмена - " << i + 1 << "\n";
                std::cout << "N попытки - " << j + 1 << "\n\n";
            }
        }
    }

}


