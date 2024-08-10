#include <iostream>
using namespace std;

int main()
{
    int *p, *p1, x = 10, y = 20;
    // float y = 20.0;

    p = &x;
    cout << "*p = " << *p << endl;
    p1 = p;

    cout << "*p1 = " << p1 << endl;
    p = &y;

    return 0;
}
