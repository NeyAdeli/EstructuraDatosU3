#include "cuentabancaria.h.cpp"
 
using namespace std;

int main(){
	//Crear una cuenta bancaria
	CuentaBancaria miCuenta("A-480920", "Jonathan Joestar", 2900.00);
	cout << "Titular: " << miCuenta.getNombreTitular() << endl;
	cout << "# Cuenta: " << miCuenta.getNumeroCuenta() << endl;	
	cout << "Saldo: $" << miCuenta.getSaldo() << endl;
	cout << " ------------------------------- " << endl;
	
	//Creando otra cuenta 
	CuentaBancaria cuentaAmigo("C-165426", "Arale Gutierrez", 784661.00);
	cout << "Titular: " << cuentaAmigo.getNombreTitular() << endl;
	cout << "# Cuenta: " << cuentaAmigo.getNumeroCuenta() << endl;	
	cout << "Saldo: $" << cuentaAmigo.getSaldo() << endl;
	cout << " ------------------------------- " << endl;
	
		//Creando otra cuenta 
	CuentaBancaria cuentaNoValida("A-354698", "John Cena", -500.00);
	cout << "Titular: " << cuentaNoValida.getNombreTitular() << endl;
	cout << "# Cuenta: " << cuentaNoValida.getNumeroCuenta() << endl;	
	cout << "Saldo: $" << cuentaNoValida.getSaldo() << endl;
	cout << " ------------------------------- " << endl;
	
	//Hacer un retiro de la cuentaMicuenta
	cout << "Quiero retirar $84 de la cuenta" << miCuenta.getNumeroCuenta() << endl;
	cout << "Saldo inicial: $" << miCuenta.getSaldo() << endl;
	miCuenta.retirar(84);
	cout << "Saldo luego de la operacion: $" << miCuenta.getSaldo() << endl;
	cout << " ------------------------------- " << endl;
	
	//Hacer un retiro de la cuenta miCuenta mayor al saldo disponible
	cout << "Quiero retirar $3500 de la cuenta" << miCuenta.getNumeroCuenta() << endl;
	cout << "Saldo inicial: $" << miCuenta.getSaldo() << endl;
	miCuenta.retirar(3500);
	cout << "Saldo luego de la operacion: $" << miCuenta.getSaldo() << endl;
	cout << " ------------------------------- " << endl;

//Hacer un retiro de un monto negativo
	cout << "Quiero retirar -$725 de la cuenta" << miCuenta.getNumeroCuenta() << endl;
	cout << "Saldo inicial: $" << miCuenta.getSaldo() << endl;
	miCuenta.retirar(-725);
	cout << "Saldo luego de la operacion: $" << miCuenta.getSaldo() << endl;
	cout << " ------------------------------- " << endl;
	
	//Hacer un deposito de la cuenta miCuenta
	cout << "Quiero depositar $12500 de la cuenta" << miCuenta.getNumeroCuenta() << endl;
	cout << "Saldo inicial: $" << miCuenta.getSaldo() << endl;
	miCuenta.depositar(12500);
	cout << "Saldo luego de la operacion: $" << miCuenta.getSaldo() << endl;
	cout << " ------------------------------- " << endl;
	
	//Hacer un retiro de la cuenta miCuenta 
	cout << "Quiero depositar -$5000 de la cuenta" << miCuenta.getNumeroCuenta() << endl;
	cout << "Saldo inicial: $" << miCuenta.getSaldo() << endl;
	miCuenta.depositar(-5000);
	cout << "Saldo luego de la operacion: $" << miCuenta.getSaldo() << endl;
	cout << " ------------------------------- " << endl;
	
	return 0;
}
