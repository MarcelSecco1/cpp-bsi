#include <iostream>
#include <locale>
#include <cctype>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float altura, pesoIdeal;
    char sexo[0];

    cout << "Informe sua altura: ";
    cin >> altura;

    cout << "M - masculino || F - feminino \n";
    cout << "Informe o seu sexo: ";
    cin >> sexo[0];
    sexo[0] = toupper(sexo[0]);

    switch (sexo[0])
    {
    case 'M':
        pesoIdeal = (72.7 * altura) - 58;
        break;
    case 'F':
        pesoIdeal = (62.1 * altura) - 44.7;
        break;
    default:
        cout << "Opção Inválida!!" << endl;
        return 0;
        break;
    }

    cout << "O peso ideal para você é: " << pesoIdeal << endl;

    return 0;
}