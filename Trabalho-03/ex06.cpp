#include <iostream>
using namespace std;

int main()
{

    int *p = (int *)0x5dc;
    char *c = (char *)0x5dc;

    cout << "*p = " << p << " c = " << c << endl;
    p++;
    c++;
    cout << "*p = " << p << " c = " << c << endl;

    return 0;
}
