#include <iostream>

using namespace std;

int main()
{
    int quantia;
    cout << "Informe quantas notas irá digitar: ";
    cin >> quantia;

    if (quantia < 1)
    {
        cout << "Informe um valor positivo.";
        return 0;
    }

    float notas[quantia];
    float soma = 0.0, media = 0.0;

    for (int i = 0; i < quantia; i++)
    {
        cout << "Informe a nota " << i + 1 << ": ";
        cin >> notas[i];
        soma += notas[i];
    }

    media = soma / quantia;

    cout << "Sua média é: " << media << endl;

    return 0;
}
