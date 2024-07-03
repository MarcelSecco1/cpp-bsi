#include <iostream>

using namespace std;

float calcularLucro(float precoCusto, float precoVenda, int quantidade)
{
    return (precoVenda - precoCusto) * quantidade;
}

int main()
{
    int quantia;

    cout << "Infome a quantia da produtos que vai cadastrar: ";
    cin >> quantia;

    struct produtos
    {
        int code, quantidade;
        float precoCusto, precoVenda;
    } strProdutos[quantia];

    for (int i = 0; i < quantia; i++)
    {
        float lucro;

        cout << "Informe o CÓDIGO do produto: ";
        cin >> strProdutos[i].code;

        cout << "Informe o PREÇO DE CUSTO do produto: ";
        cin >> strProdutos[i].precoCusto;

        cout << "Informe o PREÇO DE VENDA do produto: ";
        cin >> strProdutos[i].precoVenda;

        cout << "Informe a QUANTIDADE em ESTOQUE do produto: ";
        cin >> strProdutos[i].quantidade;

        lucro = calcularLucro(strProdutos[i].precoCusto, strProdutos[i].precoVenda, strProdutos[i].quantidade);

        cout << "O produto " << strProdutos[i].code << " pode gerar R$ " << lucro << " de lucro.\n\n";
    }
}
