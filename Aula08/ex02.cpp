#include <iostream>
#include <locale>
#include <cstring>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char palavra1[20], palavra2[20];

    cout << "Informe a palavra 1: ";
    cin >> palavra1;

    cout << "Informe a palavra 2: ";
    cin >> palavra2;

    cout << "Agora a palavra 2 é: " << strcpy(palavra2, palavra1) << "." << endl;

    return 0;
}