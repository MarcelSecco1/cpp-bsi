#include <iostream>

using namespace std;

int main(){
    int vetor[10];
    int soma =0;

    for(int i = 0; i < 10; i++){
        cout << "Digite o valor da posição " << i+1 << ": ";
        cin >> vetor[i];
        soma += vetor[i];
    }

    cout << "Os items do vetor é: ";
    for(int i = 0; i < 10; i++){
        if(i == 9){
            cout << vetor[i] << endl;
        }else{
            cout << vetor[i] << ", ";
        }
    }
    cout << "A soma dos valores do vetor eh: " << soma << endl;

    return 0;
}