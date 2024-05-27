#include <iostream>
#include <locale>
#include <cstring>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    char texto[] = "Este é um exemplo de texto para usar uma função do CSTRING";
    char *ptr;

    cout << "Procurando por 'S' no meu texto: \n";

    ptr = strchr(texto, 's');

    if (*ptr)
    {
        cout << "Encontrei a letra 'S' na posição: " << ptr - texto + 1 << endl;
        return 0;
    }

    cout << "Não encontrei essa letra...." << endl;

    return 0;
}