#include <iostream>
#include <locale>
#include <string>
#define ALUNO_QUANTITY 3

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    struct EstruturaAluno
    {
        string nome, matricula;
        int anoEntrada;
    } strAluno[ALUNO_QUANTITY];

    for (int i = 0; i < ALUNO_QUANTITY; i++)
    {
        cout << "Informe o nome: ";
        cin >> strAluno[i].nome;
        cout << "Informe a matrícula: ";
        cin >> strAluno[i].matricula;
        cout << "Informe o ano de entrada: ";
        cin >> strAluno[i].anoEntrada;
        fflush(stdin);
    }

    for (int i = 0; i < ALUNO_QUANTITY; i++)
    {
        cout << "\n--------ALUNO " << i + 1 << "----------- \n";
        cout << "Nome: " << strAluno[i].nome << endl;
        cout << "Matrícula: " << strAluno[i].matricula << endl;
        cout << "Ano de Entrada: " << strAluno[i].anoEntrada << endl;
    }

    return 0;
}