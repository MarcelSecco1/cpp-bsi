#include <iostream>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int number, i=1;

    cout << "Bem vindo ao programa, aqui recebemos números!!. \n";
    while (number != 0)
    {
        cout << "Digite 0 caso deseje sair do programa. \n";
        cout << "Digite o "<< i <<"º número: ";
        cin >> number;
        i++;
    }

    cout << "Você digitou ao todo " << i-2 << " números. \n";
    cout << "O programa foi encerrado. \n";

    
    

    return 0;
}