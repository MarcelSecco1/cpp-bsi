#include <iostream>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    for(int i=10; i <= 100; i++){
        cout << i << endl;
    }

    return 0;
}