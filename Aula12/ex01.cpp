#include <iostream>
#include <locale>
#include <string>

#define executa(nome1, nome2)

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    string nome1, nome2;

    cout << "Informe os dois nomes: ";
    cin >> nome1 >> nome2;
    executa(nome1, nome2);
    return 0;

}

void executa(string nome1, nome2)
{
// string nome1, nome2;
    cout << "Bem vindo, " << nome1 << " e " << nome2 << endl;
}