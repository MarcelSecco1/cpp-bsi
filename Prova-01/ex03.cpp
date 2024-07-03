#include <iostream>

using namespace std;

int main()
{
    int inicio;

    cout << "Informe um número inteiro positivo para começar: ";
    cin >> inicio;

    for (int i = inicio; i > 0; i--)
    {
        cout << "\n"
             << i << " patinhos foram passear. \n";
        cout << "Além das montanhas para brincar. \n";
        cout << "A mamãe gritou: Quá, quá, quá, quá. \n";
        cout << "Mas só " << i - 1 << " patinhos voltaram de lá. \n";
    }
    cout << "***********************************************";

    return 0;
}
