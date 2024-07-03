#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    fstream file;
    int mes;
    string nome, Strmes;

    cout << "Informe seu nome: ";
    cin >> nome;

    cout << "Informe o mês que nasceu(1-12): ";
    cin >> mes;

    switch (mes)
    {
    case 1:
        Strmes = "Janeiro";
        break;
    case 2:
        Strmes = "Fevereiro";
        break;
    case 3:
        Strmes = "Março";
        break;
    case 4:
        Strmes = "Abril";
        break;
    case 5:
        Strmes = "Maio";
        break;
    case 6:
        Strmes = "Junho";
        break;
    case 7:
        Strmes = "Julho";
        break;
    case 8:
        Strmes = "Agosto";
        break;
    case 9:
        Strmes = "Setembro";
        break;
    case 10:
        Strmes = "Outubro";
        break;
    case 11:
        Strmes = "Novembro";
        break;
    case 12:
        Strmes = "Dezembro";
        break;
    default:
        cout << "Opção inválida" << endl;
        return 0;
        break;
    }

    file.open("info.txt", ios::app | ios::out);

    if (!file.is_open())
    {
        cout << "Erro ao abrir arquivo" << endl;
        return 0;
    }

    cout << "Olá " << nome << ", você nasceu em " << Strmes << ". " << endl;
    file << "Olá " << nome << ", você nasceu em " << Strmes << ". " << endl;

    return 0;
}
