#include <iostream>
#include <locale>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    const int ANO_ATUAL = 2024;
    int soma = 0;

    cout << "Bem vindo ao programa, calculamos a soma da idade de 5 pessoas!!. \n";

    for(int i=0; i < 5; i++){
        int idade, anoNasc;
        string nome;
        cout << "Digite o nome da pessoa " << i+1 << "º: ";
        cin >> nome;
        cout << "Digite o ano que "<< nome <<" nasceu " << i+1 << "º: ";
        cin >> anoNasc;
        idade = ANO_ATUAL - anoNasc;
        soma += idade;
    }

    cout << "A soma das idades é: " << soma << endl;
    return 0;
}