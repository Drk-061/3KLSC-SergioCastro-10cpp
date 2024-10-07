#include <iostream>

using namespace std;
int main() {
	int numero, a, b, resultado;
	cout << "cuantas tablas: ";

	if (!(cin >> numero)) {
		cout << "ingresa un numero valido: " << endl;
		return 1;
	}
	a = 1;
	while (a <= numero) {
		b = 10;
		while (!(b < 1)) {
			resultado = a * b;
			cout << a << " * " << b << " = " << resultado << endl;
			b = b - 1;
		}
		a = a + 1;
	}
	return 0;
}