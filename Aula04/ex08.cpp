#include <iostream>
#include <locale>
#include <iomanip>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    for(int k=0; k<=1; k++){
        for (int i = 1; i <= 4; i++)
        {
           cout <<  "Tabuda do " << setw(3) << (i+4*k+1)<< "           ";
           cout << endl;
        }
        for(int i=1; i<=9; i++){
            for(int j=2+4*k; j<=5+4*k; j++){
                cout << j << " x " << i << " = " << j*i << "           ";
                cout << endl;
            }
        }
    }
    return 0;
}