#include <iostream>
#include <locale>
#include <string>
using namespace std;

int main()
{
    string name;
    float salario, imposto;
    cout << "Informe o seu nome: ";
    cin >> name;
    cout << "Informe o seu salário: ";
    cin >> salario;

    if (salario < 2000.00)
    {
        cout << name << " você tem isenção de pagamento do IRPF" << endl;
    }
    else if (salario >= 2000.00 && salario < 3000.00)
    {
        imposto = salario * 0.15;
        cout << name << " você deve pagar 15% de IRPF, totalizando: R$ " << imposto << endl;
    }
    else if (salario >= 3000.00 && salario < 5000.00)
    {
        imposto = salario * 0.20;
        cout << name << " você deve pagar 20% de IRPF, totalizando: R$ " << imposto << endl;
    }
    else if (salario >= 5000.00)
    {
        imposto = salario * 0.23;
        cout << name << " você deve pagar 23% de IRPF, totalizando: R$ " << imposto << endl;
    }
    else if (salario >= 10000.00)
    {
        imposto = salario * 0.27;
        cout << name << " você deve pagar 27% de IRPF, totalizando: R$ " << imposto << endl;
    }
    else
    {
        cout << "Informe um salário válido." << endl;
    }

    return 0;
}