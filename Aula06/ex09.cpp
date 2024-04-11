#include <iostream>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int numero;

    cout << "Informe um número: ";
    cin >> numero;

    if (numero < 0)
    {
        cout << "Informe um número positivo!!" << endl;
        return 0;
    }

    if (numero % 2 == 0)
    {
        cout << "O seu número é par!!" << endl;
        return 0;
    }
    cout << "O seu número é ímpar!!" << endl;
    return 0;
}