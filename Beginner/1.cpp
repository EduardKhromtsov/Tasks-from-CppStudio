// Составить программу, которая будет считывать введённое пятизначное число.После чего, каждую цифру этого числа необходимо вывести в новой строке.

#include <iostream>
using namespace std;

int main()
{
    int iNumber;
    cout << "Enter a five-digit number: ";
    cin >> iNumber;

    if (iNumber < 10000 || iNumber > 99999)
    {
        cout << "You entered the wrong number, try again" << endl;
    }
    else
    {
        cout << "First number is " << "\t" << iNumber / 10000 << endl;
        cout << "Second number is " << "\t" << (iNumber / 1000) % 10 << endl;
        cout << "Third number is " << "\t" << (iNumber / 100) % 10 << endl;
        cout << "Fourth number is " << "\t" << (iNumber / 10) % 10 << endl;
        cout << "Fifth number is " << "\t" << (iNumber / 1) % 10 << endl;
    }
}
