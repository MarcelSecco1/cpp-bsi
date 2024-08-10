#include <iostream>
using namespace std;

int main()
{
    void *pp;
    int *p1, p2 = 10;
    p1 = &p2;
    pp = &p2;

    cout << "O endereço em pp: " << pp << endl; // endereço de p2
    pp = &p1;
    cout << "O endereço em pp: " << pp << endl; // endereço de p1
    pp = p1;
    cout << "O endereço em pp: " << pp << endl;  // endereço de p2

    return 0;
}
