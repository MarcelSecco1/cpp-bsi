#include <iostream>

using namespace std;

int main()
{

    cout << "Escolha uma das opções: \n";
    cout << "1 - para SUBTRAIR \n";
    cout << "2 - para SOMAR \n";
    cout << "3 - para DIVIDIR \n";
    cout << "4 - para MULTIPLICAR \n";
    cout << "5 - para SAIR \n";

    int opcao;

    do
    {
        int num1 = 0,
            num2 = 0,
            result = 0;

        cout << "Informe a opção desejada: ";
        cin >> opcao;

        if (opcao == 5)
            cout << "Saindo..." << endl;
        return 0;

        cout << "Informe o primeiro número: ";
        cin >> num1;

        cout << "Informe o segundo número: ";
        cin >> num2;

        switch (opcao)
        {
        case (1):
            cout << "A subtração é: " << num1 - num2 << endl;
            break;
        case (2):
            cout << "A soma é: " << num1 + num2 << endl;
            break;
        case (3):
            cout << "A divisão é: " << num1 / num2 << endl;
            break;
        case (4):
            cout << "A multiplicação é: " << num1 * num2 << endl;
            break;
        default:
            cout << "Opção inválida!!";
            break;
        }

    } while (opcao != 5);

    return 0;
}
