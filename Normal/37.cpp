// Есть координаты двух клеток шахматной доски. Вывести Yes, если слон может за один ход перейти с одной клетки в другую. В другом случае вывести No.

#include <iostream>

struct Cell
{
    int iX;
    int iY;
};

Cell FillCell()
{
    Cell Temp;

    std::cout << "Введите координаты клетки (от 1 до 8): ";
    std::cin >> Temp.iX >> Temp.iY;

    while ((Temp.iX < 1 || Temp.iX > 8) || (Temp.iY < 1 || Temp.iY > 8))
    {
        std::cout << "Вы ввели некорректные координаты, повторите ввод (от 1 до 8): ";
        std::cin >> Temp.iX >> Temp.iY;
    }

    return Temp;
}

bool BishopMove(const Cell& firstCell, const Cell& secondCell)
{
    return (abs(firstCell.iX - secondCell.iX) == abs(firstCell.iY - secondCell.iY));
}

int main()
{
    setlocale(LC_ALL, "RU");

    Cell FirstCell = FillCell();
    Cell SecondCell = FillCell();

    BishopMove(FirstCell, SecondCell) ? std::cout << "Yes" << "\n" : std::cout << "No" << "\n";
    
}

