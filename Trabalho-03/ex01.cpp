#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    //ponteiro
    int *p;

    p = &x;

    cout << "x = " << x << endl;
    cout << "&x = " << &x << endl;
    cout << "p = " << p << endl;


    return 0;
}
