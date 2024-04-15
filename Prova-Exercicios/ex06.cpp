#include <iostream>
#include <locale>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");
    int number;

    cout << "Informe um número de 1 a 9, para realizar a tabuada: ";
    cin >> number;

    if(number > 0 && number < 10){

        cout << "\nTabuada do " << number << endl;
        cout << "============================\n";
        for(int i=0; i <= 10; i++){
            int result = number * i;

            cout << number << " x " << i << " = " << result << "\n";
        }
        cout << "============================" << endl;
    }

    return 0;
}