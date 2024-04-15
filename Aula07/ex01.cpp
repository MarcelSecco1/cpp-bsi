#include <iostream>
#include <locale>
#include <cstring>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    string nome;

    cout << "Informe seu nome: ";
    getline(cin, nome);

    cout << nome <<", que nome feio..." << endl;


    return 0;
}