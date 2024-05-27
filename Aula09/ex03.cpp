#include <iostream>

using namespace std;

int main()
{

    int nota[4];
    int total = 0;

    for (int i = 0; i < 4; i++)
    {
        cout << "Informe a nota do aluno " << i + 1 << ": ";
        cin >> nota[i];

        total += nota[i];
    }

    cout << "Sua média final é: " << total / 4 << endl;
}