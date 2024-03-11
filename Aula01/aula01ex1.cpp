#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>
#include <locale>

using namespace std;

int main(int argc, char **argv)
{

    setlocale(LC_ALL, "Portuguese");
    int number1, number2, number3;
    int resultPreliminar, resultFinal;

    cout << "Bem vindo ao programa, aqui calculamos três números. \n";
    cout << "Informe o primeiro número: ";
    cin >> number1;

    cout << "Informe o segundo número: ";
    cin >> number2;

    resultPreliminar = number1 + number2;
    cout << "Informe o terceiro número: ";
    cin >> number3;

    resultFinal = resultPreliminar + number3;
    cout << "O resultado final é: " << resultFinal << "\n";

    return 0;
}
