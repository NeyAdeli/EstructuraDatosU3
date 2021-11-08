#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class Personaje {
	private:
		string nombre;
		double puntosVida;
	public:
	Personaje(string nombre, double puntosVida);
	string getNombre();
	double getPuntosVida();
	void recibirGolpe(double importeGolpe);
	void estaVivo();
	void comer(double importeComida);
};

Personaje::Personaje(string nombre, double puntosVida){
this->nombre = nombre;
this->puntosVida = puntosVida;
}

string Personaje::getNombre(){
return this->nombre;
}

double Personaje::getPuntosVida(){
return this->puntosVida;
}

void Personaje::recibirGolpe(double importeGolpe){
if (importeGolpe > 0) {
this->puntosVida -= importeGolpe;
} else {
cout << "! Importe no valido " << endl;
}
}

void Personaje::estaVivo(){
if (this->puntosVida > 0) {
cout << "Personaje esta vivo: True " << endl;
} else {
cout << "Personaje esta vivo: False " << endl;
}
}

void Personaje::comer(double importeComida){
if (importeComida > 0 && this->puntosVida > 0) {
this->puntosVida += importeComida;
cout << "True " << endl;
} else {
cout << "! Personaje muerto, no se puede revivir " << endl;
}
}

