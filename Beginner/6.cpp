/*Программа должна нарисовать домик.
Строительным материалом являются : символы слэша(прямой / , обратный, вертикальный | ), знак минуса, символ подчёркивания.*/

#include <iostream>
using namespace std;

int main()
{
    std::cout << "\t\t" << "     /" << "\\" << endl;
    std::cout << "\t\t" << "    /" << "  \\" << endl;
    std::cout << "\t\t" << "   /" << "    \\" << endl;
    std::cout << "\t\t" << "  /----" << "--\\" << endl;
    std::cout << "\t\t" << " /" << " |" << "    |" <<  " \\"  << endl;
    std::cout << "\t\t   |" << "\t|" << endl;
    std::cout << "\t\t   |" << "\t|" << endl;
    std::cout << "\t\t   |""____" << "|" << endl;

    cout << "\n";
    
    system("pause");
}


