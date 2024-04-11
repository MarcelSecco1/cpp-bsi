#include <iostream>
#include <locale>
#include <string>
#include <cctype>

using namespace std;

float funcaoChamada1(){
    int number1;

    cout << "Digite o primeiro número: ";
    cin >> number1;
   
    return number1;
}

float funcaoChamada2(){
    int number2;

    cout << "Digite o segundo número: ";
    cin >> number2;
   
    return number2;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    string stoping= "C";
    cout << "Bem vindo ao programa, aqui calculamos!!. \n";
    while(stoping != "S"){
        char operacao;
        int number1, number2, result;
        cout << "Digite a operação desejada: \n";
        cout << "+ - Adição \n";
        cout << "- - Subtração \n";
        cout << "* - Multiplicação \n";
        cout << "/ - Divisão \n";
        cout << "S - Sair \n";
        cin >> operacao;
        
        switch(toupper(operacao)){
            case '+':
                number1 = funcaoChamada1();
                number2 = funcaoChamada2();
                result = number1 + number2;
                cout << "O resultado da soma é: " << result << endl;
                break;
            case '-':
                number1 = funcaoChamada1();
                number2 = funcaoChamada2();
                result = number1 - number2;
                cout << "O resultado da subtração é: " << result << endl;
                break;
            case '*':
                number1 = funcaoChamada1();
                number2 = funcaoChamada2();
                result = number1 * number2;
                cout << "O resultado da multiplicação é: " << result << endl;
                break;
            case '/':
                number1 = funcaoChamada1();
                number2 = funcaoChamada2(); 
                result = number1 / number2;
                cout << "O resultado da divisão é: " << result << endl;
                break;
            case 'S':
                cout << "Saindo do programa...";
                stoping = "S";
                break;
            default:
                cout << "Operação inválida." << endl;
                break;
        }
    }
    return 0;
}