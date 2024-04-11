#include <iostream>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int filhos = 0;
    float maior_salario = 0.0,
          salarios = 0.0,
          media_salarios = 0.0,
          media_filhos = 0.0;
    int pessoa = 0;

    for (int i = 0; i < 15; i++)
    {
        float salario;
        int filho;
        cout << "Informe o salário da " << i + 1 << " pessoa: ";
        cin >> salario;

        if (salario > maior_salario)
        {
            maior_salario = salario;
            pessoa = i + 1;
        }
        salarios += salario;

        cout << "Informe quantos filhos a pessoa " << i + 1 << " tem: ";
        cin >> filho;
        filhos += filho;
    }

    media_salarios = salarios / 15;
    media_filhos = filhos / 15;
    cout << "A pessoa " << pessoa << " possui o maior salário. Sendo " << maior_salario << ".\n";
    cout << "A média dos salários é: " << media_salarios << "\n";
    cout << "A média dos filhos é: " << media_filhos << "\n";

    return 0;
}