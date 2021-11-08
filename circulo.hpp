#ifndef RECTANGULO
#define CIRCULO
#include<cmath>

const double PI =3.14159265;
// Especificacion de la clase 
class Circulo { 
	private: 
		double radio;
	public: 
		Circulo(double r); 
		double calcularRadio();
		double calcularArea();
		double calcularDiametro();
		double calcularPerimetro();
}; 
//Implementacion del constructor
Circulo::Circulo(double r){
	this->radio = r;
}

//Implementacion de los metodoos
double Circulo::calcularRadio(){
	return this->radio;
}
double Circulo::calcularArea(){ 
	return PI *pow (this->radio, 2);
 }
double Circulo::calcularDiametro(){
 	return 2 * this->radio; 
}
// Devolver la base
double Circulo::calcularPerimetro(){ 
	return 2* PI * this-> radio;
	
}
#endif
