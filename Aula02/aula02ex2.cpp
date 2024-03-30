#include <iostream>
#include <locale.h>

using namespace std;

int main(int argc, char **argv)
{
    setlocale(LC_ALL, "Portuguese");
    string name;
    float note1, note2, note3, final;

    cout << "Bem-vindo ao programa. Vamos calcular sua nota média.\n";
    cout << "Por favor insira o seu nome: ";
    cin >> name;

    cout << "Olá, " << name << ".\n";
    cout << "Por favor insira a primeira nota: ";
    cin >> note1;
    cout << "Por favor insira a segunda nota: ";
    cin >> note2;
    cout << "Por favor insira a terceira nota: ";
    cin >> note3;

    final = (note1 + note2 + note3) / 3.0; 

    cout << "O aluno " << name << " possui média " << final << endl;

    return 0;
}