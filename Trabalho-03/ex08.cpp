#include <iostream>
using namespace std;

int main()
{
    int *p, *p1, x, y;
    p = &x;
    p1 = &y;

    cout << "&x = " << &x << endl;
    cout << "&y = " << &y << endl;

    p >= p1 ? cout << "p > p1" << endl : cout << "p <= p1" << endl;
   
    return 0;
}
