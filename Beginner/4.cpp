//Программа должна переводить число, введенное с клавиатуры в метрах, в километры.

#include <iostream>
using namespace std;

double ConvertToKilometers(double dNumber)
{
    return (dNumber / 1000);
}

int main()
{
    double dMeters;
    cout << "Enter the number of meters: ";
    cin >> dMeters;

    cout << "Kilometers is " << ConvertToKilometers(dMeters) << endl;
}


