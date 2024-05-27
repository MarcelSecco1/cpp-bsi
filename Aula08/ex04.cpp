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

    if(strcmp(palavra1, palavra2) == 0){
        cout << "Suas palavras são iguais." << endl;
        return 0;
    }
    cout << "Suas palavras não são iguais." << endl;


    return 0;
}