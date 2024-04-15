#include <iostream>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int opcao, num1, num2;
    float resultado = 0;

    cout << "Escolha uma opção: \n";
    cout << "1 - para SOMAR\n";
    cout << "2 - para SUBTRAIR\n";
    cout << "3 - para DIVIDIR\n";
    cout << "4 - para MULTIPLICAR\n";
    cout << "5 - para SAIR\n\n";

    cout << "Informe a opção escolhida: ";
    cin >> opcao;

    switch(opcao){
        case (1):
            cout << "Digite o primeiro número: ";
            cin >> num1;
            cout << "Digite o segundo número: ";
            cin >> num2;
            resultado = num1 + num2;
        break;
        case (2):
            cout << "Digite o primeiro número: ";
            cin >> num1;
            cout << "Digite o segundo número: ";
            cin >> num2;
            resultado = num1 - num2;
        break;
        case (3):
            cout << "Digite o primeiro número: ";
            cin >> num1;
            cout << "Digite o segundo número: ";
            cin >> num2;
            resultado = num1 / num2;
        break;
        case (4):
            cout << "Digite o primeiro número: ";
            cin >> num1;
            cout << "Digite o segundo número: ";
            cin >> num2;
            resultado = num1 * num2;
        break;
        case (5):
            cout << "Fechando... " << endl;
            return 0;
        break;

        default:
            cout << "Opção inválida... " << endl;
            return 0;
        break;
    }

    cout <<"O resultado da sua operação é: " << resultado << "." << endl;

    return 0;
}