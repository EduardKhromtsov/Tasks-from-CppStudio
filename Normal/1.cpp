/*В текстовом файле, содержащем текст программы на языке Си, проверить соответствие открывающихся и закрывающихся фигурных скобок { и }. 
Результат проверки вывести на экран и записать в виде фразы в текстовый файл.
Результат работы программы (вывод) поместить в отдельный текстовый файл (например, "out.txt"), продублировав на экране.*/

#include <iostream>
#include <string>
#include <fstream>

void Result(const unsigned short int iCounterBracketOpen, const unsigned short int iCounterBracketClose)
{
    std::ofstream out;
    out.open("D:\\Result.txt");

    if (out.is_open())
    {
        if (iCounterBracketOpen == 0 && iCounterBracketClose == 0)
        {
            std::cout << "В файле отсутствуют скобки!" << "\n\n";
            out << "В файле отсутствуют скобки!" << "\n";
        } 
        else if (iCounterBracketOpen == iCounterBracketClose)
        {
            std::cout << "Баланс скобок не нарушен!" << "\n\n";
            out << "Баланс скобок не нарушен!" << "\n";
        }
        else
        {
            std::cout << "Баланс скобок нарушен!" << "\n\n";
            out << "Баланс скобок нарушен!" << "\n";
        } 
        
    }

    out.close();
}

int main()
{
    setlocale(LC_ALL, "RU");

    char cFileName[100];
    std::string sLine;

    unsigned short int iCounterBracketOpen = 0, iCounterBracketClose = 0;

    std::cout << "Укажите путь к файлу, в котором нужно проверить баланс фигурных скобок: ";
    std::cin >> cFileName;

    std::ifstream in(cFileName);

    if (in.is_open())
        std::cout << "Файл успешно открыт." << "\n\n";
    else
    {
        std::cout << "Файл не может быть открыт, перепроверьте правильность пути к файлу." << "\n";
        exit(0);
    }

    if (in.is_open())
    {
        while (getline(in, sLine))
        {
            for (int i = 0; i < sLine.size(); ++i)
            {
                if (sLine[i] == '{')
                    ++iCounterBracketOpen;

                if (sLine[i] == '}')
                    ++iCounterBracketClose;
            }
        }
    }

    in.close();

    Result(iCounterBracketOpen, iCounterBracketClose);

    return 0;
}


