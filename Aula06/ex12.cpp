#include <iostream>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int total = 0;
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
        total += number;
    }

    media = total / 20;
    cout << "A sua média dos 20 valores é: " << media << endl;

    return 0;
}