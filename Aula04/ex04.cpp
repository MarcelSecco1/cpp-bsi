#include <iostream>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    for(int i=50; i >=10; i--){
        cout << i << endl;
    }
    return 0;
}