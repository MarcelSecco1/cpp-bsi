#include <iostream>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int quantia = 0;
    for (int i = 0; i < 15; i++)
    {
        int number;
        cout << "Informe o número " << i + 1 << ": ";
        cin >> number;
        if (number < 0)
        {
            quantia++;
        }
    }
    cout << "Você digitou " << quantia << " números negativos!! " << endl;

    return 0;
}