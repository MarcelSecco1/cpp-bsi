#include <iostream>
#include <locale>
#include <string>

using namespace std;

string cor(int value){
    string cor;
    switch(value){
        case 0:
            cor = "Red";
            break;
         case 1:
            cor = "Blue";
            break;
        case 2:
            cor = "Yellow";
            break;
        case 3:
            cor = "White";
            break;
        case 4:
            cor = "Black";
            break;
        case 5:
            cor = "Green";
            break;
    }

    return cor;
}


int main()
{
    setlocale(LC_ALL, "Portuguese");
    
        //[lado][linha][coluna]
    string cubo[6][3][3];
    //lado
    for(int l=0; l < 6; l++){
        //linha
        for(int i=0; i < 3; i++){
            //coluna
            for(int k=0; k < 3; k++){
                cubo[l][i][k] = cor(l);
            }
        }
    }

    for(int l=0; l < 6; l++){
        cout << "LADO " << l+1 << ": \n";
        for(int i=0; i < 3; i++){
            //coluna
            for(int k=0; k < 3; k++){
                 cout << cubo[l][i][k] << "\t";
            }
            cout << endl;
        }
    }

    return 0;
}

