/*Создать класс, описывающий понятие работник, со свойствами:
1. фамилия;
2. стаж;
3. часовая заработная плата;
4. количество отработанных часов.
C помощью метода реализовать ввод данных работника с клавиатуры. Рассчитать с помощью методов заработную плату, за отработанное время, и премию, 
размер которой определяется в зависимости от стажа (при стаже до 1 года 0%, до 3 лет 5%, до 5 лет 8%, свыше 5 лет 15%).
С помощью метода печати, реализовать вывод информации о работнике на экран. Предусмотреть метод для записи в файл данных о работнике.*/

#include <iostream>
#include <string>
#include <fstream>

class Worker
{
private:
    std::string sSurname;
    short int iExperience;
    short int iHourlyWage;
    int iHours, iSalary, iPremium;

    void Calculation()
    {
        iSalary = iHourlyWage * iHours;

        if (iExperience < 1)
        {
            iPremium = 0;
        }
        else if (iExperience >= 1 && iExperience < 3)
        {
            iPremium = iSalary / 100 * 5;
        }
        else if (iExperience >= 3 && iExperience < 5)
        {
            iPremium = iSalary / 100 * 8;
        }
        else if (iExperience >= 5)
        {
            iPremium = iSalary / 100 * 15;
        }
    }

    void Record()
    {
        std::ofstream out;
        out.open("D:\\Workers.txt", std::ios::app);

        if (out.is_open())
        {
            out << sSurname << "\n";
            out << "Experience is " << iExperience << "\n";
            out << "Hourly wage is " << iHourlyWage << "\n";
            out << sSurname << " has worked " << iHours << " hours" << "\n";
            out << "Salary is " << iSalary << "\n";
            out << "Premium is " << iPremium << "\n";
            out << "----------------------------------------" << "\n";
        }
        std::cout << "Information about " << sSurname << " was written in file 'Workers.txt'" << "\n";
    }

public:
    Worker(const std::string sSname, const short iExp, const short iHourWage, const int iHr)
    {
        sSurname = sSname;
        iExperience = iExp;
        iHourlyWage = iHourWage;
        iHours = iHr;

        Calculation();
    }

    void Print()
    {
        std::cout << "\n" << sSurname << "\n";
        std::cout << "Experience is " << iExperience << "\n";
        std::cout << "Hourly wage is " << iHourlyWage << "\n";
        std::cout << sSurname << " has worked " << iHours << " hours" << "\n";
        std::cout << "Salary is " << iSalary << "\n";
        std::cout << "Premium is " << iPremium << "\n";

        Record();
    }


};

int main()
{
    std::string sSurname;
    short iExperience, iHourlyWage;
    int iHours;
    
    std::cout << "Enter worker's surname: ";
    std::getline(std::cin, sSurname);

    std::cout << "Enter worker's experience: ";
    std::cin >> iExperience;

    std::cout << "Enter worker's hourly wag: ";
    std::cin >> iHourlyWage;

    std::cout << "Enter how much hours " << sSurname << " has worked: ";
    std::cin >> iHours;

    Worker Employee1(sSurname, iExperience, iHourlyWage, iHours);

    Employee1.Print();
}


