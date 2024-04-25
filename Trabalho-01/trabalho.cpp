#include <iostream>
#include <locale>
#include <string>
#include <cstring>
#include <vector>
#include <algorithm>

using namespace std;

const string SENHA_SISTEMA = "admin";
vector<string> clientes;
vector<int> opcoesEscolhidas;

int loop(int opcaoMarcada)
{
    int opcao = 0;
    opcao = opcaoMarcada;

    if (opcaoMarcada == 0)
    {
        cout << "Escolha uma opção: \n";
        cout << "1 - Cadastrar novo cliente \n";
        cout << "2 - Verificar clientes cadastrados \n";
        cout << "3 - Remover cliente \n";
        cin >> opcao;
        opcoesEscolhidas.push_back(opcao);
    }

    switch (opcao)
    {
    case 1:
    {
        cout << "Opção escolhida: 1 - Cadastrar novo cliente" << endl;
        cout << "Informe o nome do cliente: ";
        string nomeCliente;
        cin >> nomeCliente;
        clientes.push_back(nomeCliente);
        cout << "Sucesso!! Cliente cadastrado!!" << endl;
        break;
    }
    case 2:
    {
        cout << "Opção escolhida: 2 - Verificar clientes cadastrados" << endl;
        if (clientes.empty())
        {
            cout << "Nenhum cliente cadastrado." << endl;
            break;
        }

        cout << "Clientes cadastrados:" << endl;
        for (size_t i = 0; i < clientes.size(); ++i)
        {
            cout << "Cliente " << i + 1 << ": " << clientes[i] << endl;
        }

        break;
    }
    case 3:
    {
        cout << "Opção escolhida: 3 - Remover cliente" << endl;
        if (clientes.empty())
        {
            cout << "Nenhum cliente cadastrado para remover." << endl;
            break;
        }

        cout << "Informe o nome do cliente que deseja remover: ";
        string nomeCliente;
        cin >> nomeCliente;
        auto it = find(clientes.begin(), clientes.end(), nomeCliente);
        if (it != clientes.end())
        {
            clientes.erase(it);
            cout << "Cliente removido com sucesso!" << endl;
            break;
        }

        cout << "Cliente não encontrado." << endl;

        break;
    }
    default:
        cout << "Opção inválida." << endl;
    }

    return 1;
}

int main()
{
    fflush(stdin);
    setlocale(LC_ALL, "Portuguese");
    string nome;

    cout << "Bem-vindo ao programa de cadastro de clientes!! \n";
    cout << "Vamos começar com seu cadastro de ADMINISTRADOR. \n";
    cout << "Informe seu nome: ";
    cin >> nome;

    cout << "Olá, " << nome << "!! \n";
    cout << "Seu cadastro foi como ADM foi realizado com sucesso!! \n";
    cout << "Obrigado por se cadastrar!! \n";

    loop(0);

    char continuar = 'N';
    int contador = 0;
    while (continuar == 'N')
    {
        if (contador > 0)
        {
            cout << "Opção ERRADA!!! Acho que deveria escolher a outra... \n";
        }
        cout << "S - Sim \n";
        cout << "N - Não \n";
        cout << "Vamos continuar? \n";
        cin >> continuar;
        continuar = toupper(continuar);
        contador++;
    }

    cout << "AINDA BEM, achei que ia ficar dizendo não.... \n";
    cout << "Vamos continuar com o programa!! \n";

    loop(0);

    string senha = "";

    cout << "Você está usando o sistema faz um tempo né?? \n";
    cout << "Só por segurança, informe a senha: ";
    cin >> senha;
    int contadorSenha = 1;
    while (senha != SENHA_SISTEMA)
    {
        if (contadorSenha == 3)
        {
            cout << "Você errou a senha muitas vezes!! \n";
            cout << "Vou te tirar do sistema!! \n";
            cout << "Fim do programa!! \n";
            return 0;
        }
        cout << "Senha incorreta!! \n";
        cout << "O que faremos?? \n";
        cout << "VOU TIRAR VOCÊ DO SISTEMA!! Daqui a " << 3 - contadorSenha << " chances. \n";
        cout << "Tenta outra vez...!! Informe a senha: ";
        cin >> senha;
        contadorSenha++;
    }

    cout << "Senha correta!! \n";
    cout << "Acesso liberado!! \n";

    loop(0);

    cout << "Vamos finalizar o programa!! \n";
    cout << "Mas antes......... \n";
    cout << "Verificar o que você fez!!!! \n";

    for (size_t i = 0; i < opcoesEscolhidas.size(); ++i)
    {
        if (opcoesEscolhidas[i] == 1)
        {
            cout << "Opção, na " << i + 1 << "º vez: você criou um cliente..." << endl;
            continue;
        }
        if (opcoesEscolhidas[i] == 2)
        {
            cout << "Opção, na " << i + 1 << "º vez: você verificou os clientes cadastrados..." << endl;
            continue;
        }
        if (opcoesEscolhidas[i] == 3)
        {
            cout << "Opção, na " << i + 1 << "º vez: você deletou um cliente..." << endl;
            continue;
        }
        cout << "Opção na " << i + 1 << " vez: digitou algo ERRADO, idiota..." << endl;
    }

    cout << "No final você foi um bom ADM! \n";
    cout << "Obrigado por utilizar nosso programa!! \n";
    cout << "Fim do programa!! \n";

    return 0;
}