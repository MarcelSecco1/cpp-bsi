#include <iostream>
#include <locale>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    const float DESCONTO = 13.0;
    string nome;
    float produto, resultado = 0.0;
    cout << "Informe o nome do produto: ";
    cin >> nome;
    cout << "Informe o valor do produto: ";
    cin >> produto;

    //                               garantir que a divisão vai ser float
    resultado = produto - (produto * (static_cast<float>(DESCONTO) / 100));

    cout << "Produto: " << nome << endl;
    cout << "Valor: " << produto << endl;
    cout << "Desconto: " << DESCONTO << "% " << endl;
    cout << "Valor Final: " << resultado << endl;

    return 0;
}