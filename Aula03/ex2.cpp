#include <iostream>
#include <locale>
using namespace std;

int main()
{
    int number1, number2, number3;
    cout << "Informe o número 1: ";
    cin >> number1;
    cout << "Informe o número 2: ";
    cin >> number2;
    cout << "Informe o número 3: ";
    cin >> number3;

    if (number1 > number2 && number1 > number3)
    {
        cout << "O número 1 é o maior número." << endl;
    }
    else if (number2 > number1 && number2 > number3)
    {
        cout << "O número 2 é o maior número." << endl;
    }
    else if (number3 > number1 && number3 > number2)
    {
        cout << "O número 3 é o maior número." << endl;
    }
    else
    {
        cout << "Os números são iguais." << endl;
    }

    return 0;
}