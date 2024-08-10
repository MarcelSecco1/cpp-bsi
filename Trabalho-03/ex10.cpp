#include <iostream>
using namespace std;

int main()
{
    void *pp;
    int p2 = 10;
    pp = &p2;

    // cout << "O endereço em pp: " << *pp << endl; 
    cout << "O endereço em pp: " << *(int *)pp << endl;
    return 0;
}
