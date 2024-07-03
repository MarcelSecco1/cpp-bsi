#include <iostream>

using namespace std;

int main()
{
    int linha, coluna;

    cout << "Informe a quantia de linha da sua matriz: ";
    cin >> linha;

    cout << "Informe a quantia de coluna da sua matriz: ";
    cin >> coluna;

    int matriz[linha][coluna];

    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            cout << "Informe o número para posição " << i+1 << ", " << j+1 << " da matriz: ";
            cin >> matriz[i][j];
        }
    }
    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "Sua matriz sem a primeira linha e a primeira coluna é: " << endl;

    for (int i = 1; i < linha; i++)
    {
        for (int j = 1; j < coluna; j++)
        {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}
