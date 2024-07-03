#include <iostream>
#include <cstring>

using namespace std;

void imprimir_tabuada(int number)
{
    if (number < 0 & number > 10)
    {
        cout << "Number invalid.";
    }

    for (int i = 0; i < 11; i++)
    {
        cout << number << "x" << i << " = " << number * i << endl;
    }

    return;
}

int main()
{
    char caracter = 'Y';
    int number = 0;

    while (caracter != 'N')
    {
        cout << "Do you want to make the board? Y - yes or N - not " << endl;
        cin >> caracter;
        caracter = toupper(caracter);
        if (caracter == 'N')
        {
            cout << "Exiting..." << endl;
            return 0;
        }
        cout << "Digit your number to calculate: ";
        cin >> number;

        imprimir_tabuada(number);
    }

    return 0;
}