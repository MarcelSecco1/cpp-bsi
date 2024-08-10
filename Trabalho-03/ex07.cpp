#include <iostream>
using namespace std;

int main()
{
    int *p, *p1, x, y;
    p = &x;
    p1 = &y;

    cout << "&y = " << &y << endl;
    cout << "&x = " << &x << endl;

    p == p1 ? cout << "Ponteiros iguais" << endl : cout << "Ponteiros diferentes" << endl;

    return 0;
}
