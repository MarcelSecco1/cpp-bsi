#include <iostream>

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

    struct pessoa
    {
        string nome;
        float altura, peso, imc;
    } strPessoa[pessoas];

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
        cout << "===========================================\n";
    }

    return 0;
}