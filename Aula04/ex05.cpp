#include <iostream>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int init, final;
    cout << "Bem vindo ao programa, exibimos a ordem CRESCENTE de um intervalo!!. \n";
    cout << "Digite o valor inicial: ";
    cin >> init;
    cout << "Digite o valor final: ";
    cin >> final;

    if(final < init){
        cout << "O valor final deve ser maior que o valor inicial. \n";
        return 0;
    }
    
    for(int i=init; i <= final; i++){
        cout << i << endl;
    }

    return 0;
}