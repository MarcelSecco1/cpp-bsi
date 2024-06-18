#include <iostream>

using namespace std;

int main(){
    int vetor[8];
    int multiplode3 = 0;

    for(int i = 0; i < 8; i++){
        cout << "Digite o valor da posição " << i+1 << ": ";
        cin >> vetor[i];
        if(vetor[i] % 3 == 0){
            multiplode3++;
        }
    }

    cout << "Os items do vetor é: ";
    for(int i = 0; i < 8; i++){
        if(i == 9){
            cout << vetor[i] << endl;
        }else{
            cout << vetor[i] << ", ";
        }
    }

    cout << "Foram digitados " << multiplode3 << " multiplos de 3." << endl;

    return 0;
}