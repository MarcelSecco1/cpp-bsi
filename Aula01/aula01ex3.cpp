#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main (int argc, char** argv){
    const int salario = 1000;
    const int comissao = 5;
    int salarioFinal, totalVendas;
    
    cout << "Informe o valor total de vendas realizadas: ";
    cin >> totalVendas;
    salarioFinal = salario + ((totalVendas * comissao ) / 100);
    cout << "O salário final é: R$ " << salarioFinal << "\n";


    return 0;
}

