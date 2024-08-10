#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    int *p = &x;
    int **p2 = &p;

    cout << "p2 = " << p2 << endl;
    cout << "*p2 = " << *p2 << endl;
    cout << "**p2 = " << **p2 << endl;

    return 0;
}
