#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	PilaEnteros pilaLlaves; // pila para guardar caracteres
	string expresion;
	
	cout << "Ingrese una expresion: ";
	getline(cin, expresion); // Leer La expresion
	
	int n = expresion.size(); // Longitud de la cadena
	bool balanceadas = true;
	
	for (int i = 0; i < n && balanceadas; i++) {
		char letra = expresion.at(i);
		
		if (letra == '{') {
			pilaLlaves.push((int) letra); // conversion explicita
			pilaLlaves.imprimir();
		}else if (letra == '}') {
			if (pilaLlaves.estaPilaVacia()) {
				balanceadas = false;
			} else {
				pilaLlaves.pop(); // sacar la Llave de apertura
			}
			pilaLlaves.imprimir();
		}
	}
	
	if (balanceadas && pilaLlaves.estaPilaVacia()) {
		cout << "Las llaves estan balanceadas" << endl;
		} else {
		cout << "Las llaves no estan balanceadas";
	}
}
