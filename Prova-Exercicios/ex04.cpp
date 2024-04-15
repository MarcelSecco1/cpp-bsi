#include <iostream>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int idade = 0;

    cout << "Informe sua idade: ";
    cin >> idade;

    if(idade >= 65){
        cout << "Você pode utilizar a fila preferencial!! \n";
        cout << "Dirija-se para o CAIXA 1.\n";

        return 0;
    }
    cout << "Você pode utilizar somente a fila convencional!! \n";
    cout << "Dirija-se para um dos caixa: \n";
    cout << "CAIXA 2;\n";
    cout << "CAIXA 3; \n";
    cout << "CAIXA 4; \n";

    return 0;
}