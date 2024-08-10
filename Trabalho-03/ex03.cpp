#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    int *p;

    p = &x;
    cout << "x = " << x << endl;

    *p = 12;
    cout << "*p = " << *p << endl;
    cout << "x = " << x << endl;

    return 0;
}
