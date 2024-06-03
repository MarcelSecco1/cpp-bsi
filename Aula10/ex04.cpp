#include <iostream>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int quadrada;
    cout << "Informe a proporção da sua matriz quadrada: ";
    cin >> quadrada;

    int matriz[quadrada][quadrada];

    for(int i=0; i < quadrada; i++){
         for(int k=0; k < quadrada; k++){
            cout << "Informe o valor para linha " << i << " e coluna " << k << ": ";
            cin >> matriz[i][k];
        }
    }
    cout << "Sua matriz com a diagonal principal: \n";

    for(int i=0; i < 3; i++){
        for(int k=0; k < 3; k++){
            cout << matriz[i][k] << "\t";
        }
        cout << endl;
    }


    cout << "Sua diagonal principal: \n";

    for(int i=0; i < 3; i++){
        for(int k=0; k < 3; k++){
            if(i == k){
                cout << matriz[i][k] << "\t";
            }
        }
        cout << endl;
    }

    return 0;
}