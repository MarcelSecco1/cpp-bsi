#include <iostream>

using namespace std;

int main()
{
    int vetor1[10];
    int vetor2[10];

    for (int i = 0; i < 10; i++)
    {
        cout << "Digite o valor da posição " << i+1 << " do vetor 1: ";
        cin >> vetor1[i];
    }
    cout << "===========================================\n";

    for (int i = 0; i < 10; i++)
    {
        cout << "Digite o valor da posição " << i+1 << " do vetor 2: ";
        cin >> vetor2[i];
    }

    cout << "Itens do vetor 1: ";
    for (int i = 0; i < 10; i++)
    {
        if (i == 9)
        {
            cout << vetor1[i] << endl;
        }
        else
        {
            cout << vetor1[i] << " - ";
        }
    }

    cout << "Itens do vetor 2: ";
    for (int i = 0; i < 10; i++)
    {
        if (i == 9)
        {
            cout << vetor2[i] << endl;
        }
        else
        {
            cout << vetor2[i] << " - ";
        }
    }

    cout << "A multiplicação dos vetores é: ";
    for (int i = 0; i < 10; i++)
    {
        if (i == 9)
        {
            cout << vetor1[i]*vetor2[i] << endl;
        }
        else
        {
            cout << vetor1[i]*vetor2[i] << " - ";
        }
    }
    return 0;
}