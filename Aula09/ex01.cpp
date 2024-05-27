#include <iostream>
#define DIM 5

using namespace std;

int main()
{
    int vetor1[DIM] = {10, 15, 20, 40, 10};
    int vetor2[] = {10, 15, 20, 40, -1};

    cout << "Exibindo o vetor 1: \n";
    for (int i = 0; i < DIM; i++)
    {
        cout << "Vetor na posição " << i << ": " << vetor1[i] << endl;
    }

    cout << "Exibindo o vetor 2: \n";
    for (int j = 0; vetor2[j] > 0; j++)
    {
        cout << "Vetor na posição " << j << ": " << vetor2[j] << endl;
    }
}