#include <iostream>
#include <locale.h>

using namespace std;

int main(int argc, char **argv)
{
    setlocale(LC_ALL, "Portuguese");
    
    float tempF, tempC;
    cout << "Bem-vindo ao programa. Vamos converter Fahrenheit para Celsius.\n";

    cout << "Informe o valor em Fahrenheit: ";
    cin >> tempF;

    tempC = (tempF - 32) * (5.0 / 9.0);

    cout << "A temperatura em celsius é: " << tempC << "\n";

    return 0;
}