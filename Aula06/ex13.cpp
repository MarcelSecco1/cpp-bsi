#include <iostream>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int total = 0, pares = 0;
    float media;

    for (int i = 0; i < 20; i++)
    {
        int number;
        cout << "Informe o número " << i + 1 << ": ";
        cin >> number;
        if (number < 0)
        {
            cout << "Foi informado um número negativo!!" << endl;
            return 0;
        }
        if (number % 2 == 0)
        {
            pares++;
            total += number;
        }
    }

    media = total / pares;
    cout << "A sua média dos pares é: " << media << endl;

    return 0;
}