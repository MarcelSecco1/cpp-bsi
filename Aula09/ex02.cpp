#include <iostream>

using namespace std;

int main()
{
   
    int vetor[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "Informe um valor para armazenar em " << i << ": ";
        cin >> vetor[i];
    }

    cout << "Exibindo o vetor: \n";

    for (int j = 0; j < 5; j++)
    {
        cout << "Valor na posição " << j << ": " << vetor[j] << endl;
    }
}