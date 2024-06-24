#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int vetor[15], soma = 0, quatro = 0, quantMedia = 0;
    float media = 0;

    for (int i = 0; i < 15; i++)
    {
        cout << "Informe o valor da " << i + 1 << " posição: ";
        cin >> vetor[i];
        soma += vetor[i];
    }

    media = soma / 15;
    cout << "Sua média é: "<< media << endl;
    for (int j = 0; j < 15; j++)
    {
        if(vetor[j] > media){
            quantMedia++;
        }
        if (vetor[j] == 4)
        {
            quatro++;
        }
    }

    cout << "Foram digitados " << quatro << "x o número 4." << endl;
    cout << "Foram digitados " << quantMedia << "x um número maior que a média." << endl;
    return 0;
}