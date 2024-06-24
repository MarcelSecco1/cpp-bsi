#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream file;
    int bronze, prata, ouro, total;

    cout << "Digite o número de medalas de OURO que o Brasil ganhou: ";
    cin >> ouro;
    cout << "Digite o número de medalas de PRATA que o Brasil ganhou: ";
    cin >> prata;
    cout << "Digite o número de medalas de BRONZE que o Brasil ganhou: ";
    cin >> bronze;

    total = ouro + prata + bronze;

    cout << "O Brasil ganhou: " << total << " medalhas." << endl;

    file.open("medalhas.txt", ios::out | ios::app);

    if (!file.is_open())
    {
        cout << "Falha ao abrir o arquivo.";
    }

    file << "O Brasil ganhou: " << total << " medalhas.";

    file.close();

    return 0;
}
