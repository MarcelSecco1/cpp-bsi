#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    int npets;

    cout << "Informe o número de PETS que irá ser cadastrados: ";
    cin >> npets;

    struct pets
    {
        string nome, especie, raca, nomeDono;
        char sexo[1];
        int idade, rgDono, telefoneDono;
    } strPets[npets];

    for (int i = 0; i < npets; i++)
    {

        cout << "Informe o nome do PET: ";
        cin >> strPets[i].nome;
        cout << "Informe a espécie do PET: ";
        cin >> strPets[i].especie;
        cout << "Informe a raça do PET: ";
        cin >> strPets[i].raca;
        cout << "Informe o sexo do PET: ";
        cin >> strPets[i].sexo;
        cout << "Informe a idade do PET: ";
        cin >> strPets[i].idade;
        cout << "Informe o nome do dono do PET: ";
        cin >> strPets[i].nomeDono;
        cout << "Informe o RG do dono do PET: ";
        cin >> strPets[i].rgDono;
        cout << "Informe o telefone do dono do PET: ";
        cin >> strPets[i].telefoneDono;
        cout << "===========================================\n";
        fflush(stdin);
    }

    for (int i = 0; i < npets; i++)
    {
        cout << "Nome do PET: " << strPets[i].nome << endl;
        cout << "Espécie do PET: " << strPets[i].especie << endl;
        cout << "Raça do PET: " << strPets[i].raca << endl;
        cout << "Sexo do PET: " << strPets[i].sexo << endl;
        cout << "Idade do PET: " << strPets[i].idade << endl;
        cout << "Nome do dono do PET: " << strPets[i].nomeDono << endl;
        cout << "RG do dono do PET: " << strPets[i].rgDono << endl;
        cout << "Telefone do dono do PET: " << strPets[i].telefoneDono << endl;
        cout << "===========================================\n";
    }

    return 0;
}