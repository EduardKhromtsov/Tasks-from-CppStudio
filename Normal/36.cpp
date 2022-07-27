/*Написать фрагмент программы, удаляющий i-й элемент из массива целых чисел размера N, i <= N. 
Фрагмент оформить в виде функции, массив передать в функцию через параметры.*/

#include <iostream>

void DeleteElement(int *&pArr, int &Size, int Number);

int main()
{
	setlocale(LC_ALL, "RU");

	int iSize, iNumber;

	std::cout << "Укажите количество элементов массива: ";
	std::cin >> iSize;

	int *pArray = new int[iSize];

	for (int i = 0; i < iSize; ++i)
	{
		pArray[i] = rand() % 100;
		
		std::cout << pArray[i] << " ";
	}

	std::cout << "\nУкажите номер элемента массива, который необходимо удалить: ";
	std::cin >> iNumber;

	DeleteElement(pArray, iSize, iNumber);

	for (int i = 0; i < iSize; ++i)
	{
		std::cout << pArray[i] << " ";
	}

	std::cout << "\n";
	
	delete [] pArray;
}

void DeleteElement(int *&pArr, int &Size, int Number)
{
	--Number;

	int *pNewArray = new int[Size - 1];

	--Size;

	bool bSameElement = true;

	for (int i = 0; i < Size; ++i)
	{
		if (i == Number)
		{
			bSameElement = false;
		}

		if (bSameElement)
		{
			pNewArray[i] = pArr[i];
		}
		else
		{
			pNewArray[i] = pArr[i + 1];
		}
	}

	delete[] pArr;

	pArr = pNewArray;

}


