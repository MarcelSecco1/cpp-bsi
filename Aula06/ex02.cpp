#include <iostream>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    cout << "Meu nome é: Marcel\n";
    cout << "Sou do curso de Sistemas de Informação.\n";
    cout << "Estou no primeiro ano.\n";
    cout << "Gosto de programação!!!\n";
    return 0;
}