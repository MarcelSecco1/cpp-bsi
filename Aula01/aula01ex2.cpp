#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	float note1, note2, final;

	cout << "Bem-vindo ao programa. Vamos calcular sua nota média.\n";
	cout << "Por favor insira a primeira nota: ";
	cin >> note1;
	cout << "Por favor insira a segunda nota: ";
	cin >> note2;

	final = (note1 + note2) / 2.0; // Ensure floating-point division

	cout << "A sua média final é: " << final << endl;

	return 0;
}