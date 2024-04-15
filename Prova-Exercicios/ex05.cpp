#include <iostream>
#include <locale>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");

    const int SENHA_CORRETA = 1234;

    for(int i=0; i < 3; i++){
        int senha, tentativas;
        
        cout << "Informe a senha: ";
        cin >> senha;

        if(senha == SENHA_CORRETA){
            cout << "Senha correta!!" << endl;
            return 0;
        }
        tentativas = 2 - i;
        cout << "Senha incorreta, resta " << tentativas << " tentativas. \n";
    }



    return 0;
}