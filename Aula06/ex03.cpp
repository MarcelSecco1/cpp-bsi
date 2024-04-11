#include <iostream>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    const float PI = 3.14;
    float raio, perimetro, area;
    cout << "Informe o valor do raio: ";
    cin >> raio;
    perimetro = 2 * PI * raio;
    area = PI * (raio * raio);

    cout << "O seu perímetro é: " << perimetro << endl; 
    cout << "O a sua área é: " << area << endl; 

    return 0;
}