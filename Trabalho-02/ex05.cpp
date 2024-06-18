#include <iostream>

using namespace std;

int main()
{
    int vetor[10], vetorinv[10];

    for (int i = 0; i < 10; i++)
    {
        cout << "Digite o valor da posição " << i+1 << ": ";
        cin >> vetor[i];
    }
    cout << "===========================================\n";
    cout << "O vetor é: ";

    for (int k = 0; k < 10; k++)
    {
        if (k == 9)
        {
            cout << vetor[k] << endl;
        }
        else
        {
            cout << vetor[k] << " - ";
        }
    }
    cout << "O vetor invertido é: ";
    for (int j = 10; j > 0; j--)
    {
        if (j == 1)
        {
            cout << vetor[j - 1] << endl;
        }
        else
        {
            cout << vetor[j - 1] << " - ";
        }
    }
}
