#include <iostream>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int matricula;
    char letra[0];
    bool aprovado;
    float notas[3], media;

    cout << "Informe sua matricula: ";
    cin >> matricula;

    for (int i = 0; i < 3; i++)
    {
        cout << "Informe sua nota " << i + 1 << ": ";
        cin >> notas[i];
    }

    media = (notas[0] + notas[1] + notas[2]) / 3;

    if (media >= 9.0)
    {
        letra[0] = 'A';
        aprovado = true;
    }
    else if (media < 9.0 && media >= 7.5)
    {
        letra[0] = 'B';
        aprovado = true;
    }
    else if (media < 7.5 && media >= 6.0)
    {
        letra[0] = 'C';
        aprovado = true;
    }
    else if (media < 6.0 && media >= 4.0)
    {
        letra[0] = 'D';
        aprovado = false;
    }
    else if (media > 4.0)
    {
        letra[0] = 'E';
        aprovado = false;
    }
    cout << "Matrícula: " << matricula << "\n";
    cout << "Nota 1: " << notas[0] << "\n";
    cout << "Nota 2: " << notas[1] << "\n";
    cout << "Nota 3: " << notas[2] << "\n";
    if (aprovado)
    {
        cout << "Aprovado com a letra " << letra[0] << "!!";
    }else {
        cout << "Reprovado com a letra " << letra[0] << "!!";
    }

    return 0;
}