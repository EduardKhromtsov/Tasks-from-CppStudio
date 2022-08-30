/*Суть задачи: есть файл в котором записан некоторый текст на английском языке.
Требуется вывести в алфавитном порядке все буквы которые встречаются в файле. Каждую букву выводить только один раз.*/

#include <iostream>
#include <vector>
#include <fstream>
#include <string>

int main()
{
    setlocale(LC_ALL, "RU");

	std::string sFilePath;

    std::cout << "Укажите путь к файлу: ";
    std::cin >> sFilePath;

    std::ifstream FileIn;

	FileIn.open(sFilePath);

	if (!FileIn.is_open())
	{
		std::cout << "Ошибка открытия файла." << "\n";
		exit(0);
	}
	else
		std::cout << "Файл успешно открыт!" << "\n";

	std::string sStr;

	std::vector<char> CharVector, FinalVector;

	while (std::getline(FileIn, sStr))
	{
		for (int i = 0; i < sStr.length(); ++i)
		{
			if (sStr[i] >= 'a' && sStr[i] <= 'z' || sStr[i] >= 'A' && sStr[i] <= 'Z')
			{
				CharVector.push_back(tolower(sStr[i]));
			}
		}
	}

	for (char i = 'a'; i <= 'z'; ++i)
	{
		for (int j = 0; j < CharVector.size(); ++j)
		{
			if (CharVector[j] == i)
			{
				FinalVector.push_back(CharVector[j]);
				break;
			}
		}
	}

	for (int i = 0; i < FinalVector.size(); ++i)
		std::cout << FinalVector[i];

	FileIn.close();

	std::cout << "\n";


}


