/*Напишите программу которая сортирует записи в файле в порядке возрастания номера телефона. В текстовом файле находятся записи о номерах телефонов.
В каждой строке записана информация: номер телефона, ФИО, адрес.*/

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <algorithm>

int main()
{
    setlocale(LC_ALL, "RU");

    std::string sTemp, sFilePath;

    std::vector <std::string> SortVector;

    std::fstream File;

    std::cout << "Укажите путь к файлу: ";
    std::cin >> sFilePath;

    File.open(sFilePath, std::fstream::in);

    if (!File.is_open())
    {
        std::cout << "Ошибка открытия файла." << "\n";
        exit(0);
    }
    else
        std::cout << "Файл успешно открыт." << "\n";

    while (std::getline(File, sTemp))
    {
        SortVector.push_back(sTemp);
    }

    File.close();

    sort(SortVector.begin(), SortVector.end());
    
    for (int i = 0; i < SortVector.size(); ++i)
    {
        std::cout << SortVector[i] << "\n";
    }

    File.open("Result.txt", std::fstream::out);

    if (!File.is_open())
    {
        std::cout << "Ошибка открытия/создания файла." << "\n";
        exit(0);
    }
    else
        std::cout << "Файл успешно создан/открыт." << "\n";

    for (int i = 0; i < SortVector.size(); ++i)
    {
        File << SortVector[i] << "\n";
    }
    
    std::cout << "Результат сортировки находится в файле Result.txt в папке с проектом." << "\n";

    File.close();

    return 0;
}

