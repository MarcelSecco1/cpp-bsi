#include <iostream>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int init = 100, final = 200, soma = 0;

    cout << "Bem vindo ao programa, exibimos a soma dos números pares de 100 a 200!!. \n";
    for(int i=init; i <= final; i++){
        if(i % 2 == 0)
            soma += i;
    }
    cout << "A soma dos números pares é: " << soma << endl;
    return 0;
}