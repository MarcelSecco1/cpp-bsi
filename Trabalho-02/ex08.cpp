#include <iostream>

using namespace std;

int main()
{
    int matriz[4][5];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << "Digite o valor da posição [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
            fflush(stdin);
        }
    }

    cout << "Sua matriz é: \n";
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "Sua matriz resultante é: \n";

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            float divisao = 0;
            divisao = (matriz[i][j] * 0.5);
            cout << divisao << "\t";
        }
        cout << endl;
    }

    return 0;
}