/*Суть задачи: по введенному номеру дня недели вывести его название, используя оператор множественного выбора.
Нумерация дней недели начинается с 1 – понедельник, 2 — вторник и т.д.*/

#include <iostream>

int main()
{
    setlocale(LC_ALL, "RU");

    std::cout << "1. Понедельник" << std::endl;
    std::cout << "2. Вторник" << std::endl;
    std::cout << "3. Среда" << std::endl;
    std::cout << "4. Четверг" << std::endl;
    std::cout << "5. Пятница" << std::endl;
    std::cout << "6. Суббота" << std::endl;
    std::cout << "7. Воскресенье" << std::endl;

    int iDay;

    std::cout << "Введите номер дня недели: ";
    std::cin >> iDay;

        switch (iDay)
        {
        case 1:
            std::cout << "Понедельник" << std::endl;
            break;
        case 2:
            std::cout << "Вторник" << std::endl;
            break;
        case 3:
            std::cout << "Среда" << std::endl;
            break;
        case 4:
            std::cout << "Четверг" << std::endl;
            break;
        case 5:
            std::cout << "Пятница" << std::endl;
            break;
        case 6:
            std::cout << "Суббота" << std::endl;
            break;
        case 7:
            std::cout << "Воскресенье" << std::endl;
            break;
        default:
            std::cout << "Номер дня недели введен некорректно" << std::endl;
        }
         
}


