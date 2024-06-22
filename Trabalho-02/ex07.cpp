#include <iostream>

using namespace std;

int main()
{
    int matriz[6][6];

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cout << "Digite o valor da posição [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    cout << "Sua matriz é: \n";
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "Sua diagonal secundária é: \n";
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            int soma = i + j;
            if (soma == 5)
            {
                cout << matriz[i][j];
            }
            else
            {
                cout << "\t";
            }
        }
        cout << endl;
    }

    return 0;
}