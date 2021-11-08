#include "personaje.h.cpp"
 
using namespace std;

int main() {

// Personaje 1
Personaje Personaje1("Geovani", 50);
cout << "Nombre: " << Personaje1.getNombre() << endl;
cout << "Puntos de vida inicial: " << Personaje1.getPuntosVida() << endl;
cout << "Recibir golpe de 10 puntos: " << endl;
Personaje1.recibirGolpe(10);
cout << "Puntos de vida despues de golpe: " << Personaje1.getPuntosVida() << endl;
Personaje1.estaVivo();
cout << "Comer 50 puntos: " << endl;
Personaje1.comer(50);
cout << "Puntos de vida despues de comer: " << Personaje1.getPuntosVida() << endl;
cout << "----------------------------------" << endl;

// Personaje 2
Personaje Personaje2("Alexis", 50);
cout << "Nombre: " << Personaje2.getNombre() << endl;
cout << "Puntos de vida inicial: " << Personaje2.getPuntosVida() << endl;
cout << "Recibir golpe de 110 puntos: " << endl;
Personaje2.recibirGolpe(110);
cout << "Puntos de vida despues de golpe: " << Personaje2.getPuntosVida() << endl;
Personaje2.estaVivo();
cout << "Comer 40 puntos: " << endl;
Personaje2.comer(40);
cout << "Puntos de vida despues de comer: " << Personaje2.getPuntosVida() << endl;
cout << "----------------------------------" << endl;

// Personaje 3
Personaje Personaje3("Valeri", 50);
cout << "Nombre: " << Personaje3.getNombre() << endl;
cout << "Puntos de vida inicial: " << Personaje3.getPuntosVida() << endl;
cout << "Recibir golpe de 50 puntos: " << endl;
Personaje3.recibirGolpe(50);
cout << "Puntos de vida despues de golpe: " << Personaje3.getPuntosVida() << endl;
Personaje3.estaVivo();
cout << "Comer 30 puntos: " << endl;
Personaje3.comer(30);
cout << "Puntos de vida despues de comer: " << Personaje3.getPuntosVida() << endl;
cout << "----------------------------------" << endl;

// Personaje 4
Personaje Personaje4("Juan", 150);
cout << "Nombre: " << Personaje4.getNombre() << endl;
cout << "Puntos de vida inicial: " << Personaje4.getPuntosVida() << endl;
cout << "Recibir golpe de 50 puntos: " << endl;
Personaje4.recibirGolpe(50);
cout << "Puntos de vida despues de golpe: " << Personaje4.getPuntosVida() << endl;
Personaje4.estaVivo();
cout << "Comer 30 puntos: " << endl;
Personaje4.comer(30);
cout << "Puntos de vida despues de comer: " << Personaje4.getPuntosVida() << endl;
cout << "----------------------------------" << endl;

return 0;
}

		

