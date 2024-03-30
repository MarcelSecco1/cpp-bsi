#include <iostream>
#include <locale>
using namespace std;

int main()
{
    float number1, number2, result;
    int operacao;
    cout << "Informe o número 1: ";
    cin >> number1;
    cout << "Informe o número 2: ";
    cin >> number2;
    cout << " 1 - Soma \n 2 - Subtração \n 3 - Divisão\n 4 - Multiplicação\n";
    cout << "Qual operação deseja realizar? ";
    cin >> operacao;

    switch (operacao)
    {
    case (1):
        result = number1 + number2;
        cout << "O resultado da soma é: " << result << endl;
        break;
    case (2):
        result = number1 - number2;
        cout << "O resultado da subtração é: " << result << endl;
        break;
    case (3):
        result = number1 / number2;
        cout << "O resultado da divisão é: " << result << endl;
        break;
    case (4):
        result = number1 * number2;
        cout << "O resultado da multiplicação é: " << result << endl;
        break;
    default:
        cout << "Operação inválida." << endl;
        break;
    }

    return 0;
}