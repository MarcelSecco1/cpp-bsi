#include <iostream>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int linha1, col1;
    cout << "Informe a quantia de linhas das matrizes: ";
    cin >> linha1;
    cout << "Informe a quantia de colunas das matrizes: ";
    cin >> col1;
    
    int matriz1[linha1][col1];
    int matriz2[linha1][col1];
    int matrizsoma[linha1][col1];

    for(int y; y < 2; y++){
        for(int i=0; i < linha1; i++){
            for(int j=0; j < col1; j++){
                if(y){
                    cout << "\nInforme o valor da Matriz " << y+1 << ", linha " << i << "e coluna "<< j <<": ";
                    cin >> matriz2[i][j];
                }else{
                    cout << "\nInforme o valor da Matriz " << y+1 << ", linha " << i << "e coluna "<< j <<": ";
                    cin >>  matriz1[i][j];
                }
            }
        }
    }

    cout << "\n================================================\n";
    for(int i=0; i < linha1; i++){
            for(int j=0; j < col1; j++){
                matrizsoma[i][j] = matriz1[i][j] + matriz2[i][j];
                cout << matrizsoma[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "================================================\n";


    return 0;
}