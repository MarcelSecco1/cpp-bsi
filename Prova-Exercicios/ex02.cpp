#include <iostream>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int ouro, bronze, prata, resultado;

    cout << "Informe o número de medalhas de OURO que foi ganha pelo Brasil: ";
    cin >> ouro;
    cout << "Informe o número de medalhas de PRATA que foi ganha pelo Brasil: ";
    cin >> prata;
    cout << "Informe o número de medalhas de BRONZE que foi ganha pelo Brasil: ";
    cin >> bronze;

    resultado = ouro + prata + bronze;

    cout << "O Brasil ganhou " << resultado << " medalhas." << endl;

    return 0;
}