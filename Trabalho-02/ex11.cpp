#include <iostream>

using namespace std;

float calcular(float peso, float altura)
{
    float imc;
    imc = peso / (altura * altura);
    return imc;
}

int main()
{
    float peso, altura, imc;
    cout << "Programa para calcular IMC: \n";

    cout << "Digite seu peso: ";
    cin >> peso;
    cout << "Digite sua altura: ";
    cin >> altura;

    imc = calcular(peso, altura);

    cout << "Seu IMC é: " << imc << endl;

    return 0;
}