#include <iostream>
#include <fstream>

using namespace std;

float calcular(float peso, float altura)
{
    float imc;
    imc = peso / (altura * altura);
    return imc;
}

int main()
{
    int pessoas;
    cout << "Informe quantas pessoas será cadastradas: ";
    cin >> pessoas;

    fstream file;

    struct pessoa
    {
        string nome;
        float altura, peso, imc;
    } strPessoa[pessoas];

    file.open("pessoas.txt", ios::out | ios::app);

    if (!file.is_open())
    {
        cout << "Erro ao abrir o arquivo.\n";
        return 0;
    }

    cout << "===========================================\n";
    for (int i = 0; i < pessoas; i++)
    {
        cout << "Digite o nome da pessoa " << i + 1 << ": ";
        cin >> strPessoa[i].nome;
        cout << "Digite o peso da pessoa " << i + 1 << ": ";
        cin >> strPessoa[i].peso;
        cout << "Digite a altura da pessoa " << i + 1 << ": ";
        cin >> strPessoa[i].altura;


        strPessoa[i].imc = calcular(strPessoa[i].peso, strPessoa[i].altura);
        cout << "IMC do " << strPessoa[i].nome << " é: " << strPessoa[i].imc << endl;
        file << "IMC do " << strPessoa[i].nome << " é: " << strPessoa[i].imc << endl;
        cout << "===========================================\n";
    }

    file.close();
    return 0;
}