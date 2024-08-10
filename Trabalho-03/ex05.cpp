#include <iostream>
using namespace std;

int main()
{

    int *p = (int *)0x5dc;

    cout << "p = " << p << endl; 
    p++;
    cout << "p = " << p << endl;
    p += 15;
    cout << "p = " << p << endl;
    p -= 2;
    cout << "p = " << p << endl;

    return 0;
}
