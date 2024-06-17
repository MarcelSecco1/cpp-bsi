
#include <iostream>
#include <locale>
#include <string>

using namespace std;

void tabuada(int number, int i)
{
    cout << number << " x " << i << " = " << i * number << endl;
    return;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int number;

    cout << "Informe um número: ";
    cin >> number;

    for (int i = 0; i < 11; i++)
    {
        tabuada(number, i);
    }

    return 0;
}
