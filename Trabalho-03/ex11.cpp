#include <iostream>
using namespace std;

int main()
{
    int vet[5] = {1, 2, 3, 4, 5};
    int *p = vet;

    for (int i = 0; i < 5; i++)
    {
        cout << "p[" << i << "] = " << p[i] << endl;
    }

    return 0;
}
