#include <iostream>
#include <locale>
#include <cctype>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int pessoas;
    cout << "Informe a quantia de pessoas que vai cadastrar: ";
    cin >> pessoas;

    struct EstruturaPessoa
    {
        string nome;
        int idade, cep;
        char sexo[1], plano[1];
    } strPessoa[pessoas];
    
    char teste[1];

    for(int i=0; i < pessoas; i++){
        cout << "\n---- PESSOA " << i+1 << "----\n";
        cout << "Informe o nome: ";
        cin >> strPessoa[i].nome;
        cout << "Informe a idade: ";
        cin >> strPessoa[i].idade;
        cout << "Informe o sexo (F ou M): ";
        cin >> strPessoa[i].sexo;
        cout << "Informe o CEP: ";
        cin >> strPessoa[i].cep;
        cout << "Possui plano? (S ou N) ";
        cin >> strPessoa[i].plano;
        fflush(stdin);
    }

    cout << "\n---------- EXIBINDO DADOS ----------\n";

    for(int i=0; i < pessoas; i++){
        // char teste;
        cout << "------ PESSOA " << i+1 << " ------\n";
        cout << "Nome: " << strPessoa[i].nome << endl;
        cout << "Idade: " << strPessoa[i].idade << endl;
        cout << "Sexo: " << strPessoa[i].sexo << endl;
        cout << "CEP: " << strPessoa[i].cep << endl;
        cout << "Plano: " << strPessoa[i].plano << endl;
    }

    return 0;
}