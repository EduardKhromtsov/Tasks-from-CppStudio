
/*Запрограммировать следующее выражение: (а + b — f / а) + f * a * a —(a + b) Числа а, b, f вводятся с клавиатуры.
Организовать пользовательский интерфейс, таким образом, чтобы было понятно, в каком порядке должны вводиться числа.*/

#include <iostream>
using namespace std;

template <typename T> T Calculation(T FirstNum, T SecondNum, T ThirdNum)
{
	return (FirstNum + SecondNum - ThirdNum / FirstNum) + ThirdNum * FirstNum * FirstNum - (FirstNum + SecondNum);
}

int main()
{
	int iFirstNumber, iSecondNumber, iThirdNumber;
	cout << "Enter three numbers (using the space bar): ";
	cin >> iFirstNumber >> iSecondNumber >> iThirdNumber;

	cout << "Result is "<< Calculation(iFirstNumber, iSecondNumber, iThirdNumber) << endl;
}


