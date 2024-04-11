#include <iostream>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int codigo, quantia;
    float preco, resultado;

    cout << "Cachorro quente - 100 \n";
    cout << "Bauru simples - 101 \n";
    cout << "Bauru com ovo - 102 \n";
    cout << "Hamburger - 103 \n";
    cout << "Cheeseburguer - 104 \n";
    cout << "Refrigerante Lata - 105 \n";
    cout << "Água - 106 \n";

    cout << "Informe o código do produto: ";
    cin >> codigo;

    cout << "Informe a quantia do produto: ";
    cin >> quantia;

    switch (codigo)
    {
    case (100):
        preco = 9.20;
        resultado = preco * quantia;
        break;
    case (101):
        preco = 12.00;
        resultado = preco * quantia;
        break;
    case (102):
        preco = 13.00;
        resultado = preco * quantia;
        break;
    case (103):
        preco = 10.00;
        resultado = preco * quantia;
        break;
    case (104):
        preco = 12.00;
        resultado = preco * quantia;
        break;
    case (105):
        preco = 5.00;
        resultado = preco * quantia;
        break;
    case (106):
        preco = 3.00;
        resultado = preco * quantia;
        break;
    default:
        cout << "Opção Inválida!!";
        break;
    }

    cout << "O total é: R$ " << resultado << endl;
    return 0;
}