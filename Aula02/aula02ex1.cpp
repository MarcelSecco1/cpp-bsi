#include <locale>
#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    setlocale(LC_ALL, "Portuguese");
    string nome;
    float distancia, tempo, velocidadeMedia;

    cout << "Digite seu nome: ";
    cin >> nome;
    cout << "Digite a distância percorrida (em km): ";
    cin >> distancia;
    cout << "Digite o tempo gasto (em minutos): ";
    cin >> tempo;

    velocidadeMedia = distancia / (tempo / 60.0);

    cout << "A velocidade média do " << nome << " foi de " << velocidadeMedia << " km/h." << endl;

    return 0;
}
