#include <iostream>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
            //[linha][coluna]
    int matriz[3][3];

    for(int i=0; i < 3; i++){
        for(int k=0; k < 3; k++){
            cout << "Informe o valor para linha " << i << " e coluna " << k << ": ";
            cin >> matriz[i][k];
        }
    }

     for(int i=0; i < 3; i++){
        for(int k=0; k < 3; k++){
                cout << matriz[i][k] << "\t";
        }
        cout << endl;
    }


    return 0;
}