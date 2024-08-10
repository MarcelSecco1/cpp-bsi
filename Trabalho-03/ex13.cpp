#include <iostream>
using namespace std;

int main()
{
    int *pvet[2];
    int x = 10, y[2] = {20, 30};
    pvet[0] = &x;
    pvet[1] = y;

    cout << "pvet[0] = " << pvet[0] << endl;
    cout << "pvet[1] = " << pvet[1] << endl;

    cout << "*pvet[0] = " << *pvet[0] << endl;
    cout << "pvet[1][1] = " << pvet[1][1] << endl;

    return 0;
}
