#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    int npets;
    fstream file;

    cout << "Informe o número de PETS que irá ser cadastrados: ";
    cin >> npets;

    struct pets
    {
        string nome, especie, raca, nomeDono;
        char sexo;
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

    file.open("pets.txt", ios::out | ios::app);

    if (file.is_open())
    {
        for (int i = 0; i < npets; i++)
        {
            file << "Nome do PET: " << strPets[i].nome << endl;
            file << "Espécie do PET: " << strPets[i].especie << endl;
            file << "Raça do PET: " << strPets[i].raca << endl;
            file << "Sexo do PET: " << strPets[i].sexo << endl;
            file << "Idade do PET: " << strPets[i].idade << endl;
            file << "Nome do dono do PET: " << strPets[i].nomeDono << endl;
            file << "RG do dono do PET: " << strPets[i].rgDono << endl;
            file << "Telefone do dono do PET: " << strPets[i].telefoneDono << endl;
            file << "===========================================\n";
        }
    }

    file.close();

    return 0;
}