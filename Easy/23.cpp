/*Разработать функцию, в которую передаются в качестве аргументов массив типа float и его размер.
Функция должна возвращать среднее арифметическое элементов массива.*/

#include <iostream>
#include <iomanip>

float Average(const float* const Array, const int Size)
{
	float fNumber = 0;

	for (int i = 0; i < Size; ++i)
	{
		fNumber += Array[i];
	}

	return (fNumber / Size);
	
}

int main()
{
	setlocale(LC_ALL, "RU");

	int iSize;

	std::cout << "Введите размер массива: ";
	std::cin >> iSize;

	float* fArray = new float[iSize];

	for (int i = 0; i < iSize; ++i)
	{
		std::cout << "Введите элемент массива [" << i << "] = ";
		std::cin >> fArray[i];
	}

	std::cout << "Среднее арифметическое = " << std::fixed << std::setprecision(2) << Average(fArray, iSize) << "\n";
}


