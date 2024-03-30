#include <iostream>
#include <locale>
using namespace std;

int main()
{
    int number1, number2;
    cout << "Informe o número 1: ";
    cin >> number1;
    cout << "Informe o número 2: ";
    cin >> number2;

    if (number1 > number2)
    {
        cout << "O número 1 é maior que o número 2." << endl;
    }
    else if (number1 < number2)
    {
        cout << "O número 2 é maior que o número 1." << endl;
    }
    else
    {
        cout << "Os números são iguais." << endl;
    }

    return 0;
}