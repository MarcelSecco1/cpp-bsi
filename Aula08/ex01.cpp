#include <iostream>
#include <locale>
#include <cstring>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char palavra[20];

    cout << "Informe uma palavra: ";
    cin >> palavra;

    cout << "Sua palavra possui: " << strlen(palavra) << " letras." << endl;

    return 0;
}