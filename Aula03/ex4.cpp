#include <iostream>
#include <locale>
using namespace std;

int main()
{
    int operacao;

    cout << " 1 - São Paulo \n 2 - Santos \n 3 - Palmeiras\n 4 - Corinthians\n";
    cout << "Digite o número do tims que deseja escolher: ";
    cin >> operacao;

    switch (operacao)
    {
    case (1):
        cout << "Você escolheu o São Paulo." << endl;
        break;
    case (2):
        cout << "Você escolheu o Santos." << endl;
        break;
    case (3):
        cout << "Você escolheu o Palmeiras." << endl;
        break;
    case (4):
        cout << "Você escolheu o Corinthians." << endl;
        break;
    default:
        cout << "Operação inválida." << endl;
        break;
    }

    return 0;
}