#include <iostream>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float numero;

    cout << "Informe um número: ";
    cin >> numero;

    if (numero >= 0)
    {
        cout << "O seu número é positivo!!" << endl;
        return 0;
    }

    cout << "O seu número é negativo!!" << endl;
    return 0;
}