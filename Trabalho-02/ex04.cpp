#include <iostream>
#include <string>

using namespace std;

int main()
{
    int notas1[15], notas2[15];
    float media[15];
    string state[15];

    for (int i = 0; i < 15; i++)
    {
        cout << "Digite a nota 1 do aluno " << i + 1 << ": ";
        cin >> notas1[i];
        cout << "Digite a nota 2 do aluno " << i + 1 << ": ";
        cin >> notas2[i];
        media[i] = (notas1[i] + notas2[i]) / 2;
        if (media[i] >= 6.0)
        {
            state[i] = "Aprovado";
        }
        else
        {
            state[i] = "Reprovado";
        }
    }
    cout << "===========================================\n";
    for (int i = 0; i < 15; i++)
    {
        cout << "Aluno " << i + 1 << ":\n";
        cout << "Nota 1: " << notas1[i] << endl;
        cout << "Nota 2: " << notas2[i] << endl;
        cout << "Media: " << media[i] << endl;
        cout << "Situação: " << state[i] << endl;
        cout << "===========================================\n";
    }

    return 0;
}