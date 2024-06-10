
#include <iostream>
#include <locale>
#include <string>

using namespace std;

int tabuada(int number, int i)
{
    return i * number;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int number;

    cout << "Informe um número: ";
    cin >> number;
    for (int i; i < 11; i++)
    {
        cout << number << " x " << i << " = " << tabuada(number, i);
    }

    return 0;
}
