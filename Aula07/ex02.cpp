#include <iostream>
#include <locale>
#include <cstring>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float notas = 0.0, resultado;
    string nome;

    cout << "Informe o nome do aluno: ";
    getline(cin, nome);

    for (int i = 0; i < 3; i++)
    {
        float nota;
        cout << "Informe a nota " << i + 1 << ": ";
        cin >> nota;
        notas += nota;
    }

    resultado = notas/3;

    cout << nome << ", sua média é: " << resultado << endl;


    return 0;
}