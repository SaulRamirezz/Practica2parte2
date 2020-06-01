#include <iostream>
using namespace std;
//Voy a mejorar este programa pero mientras subo este :v

int main()
{
	int servicios, otra = 0, saldo = 200, InOut = 0;
	cout << "Hola, bienvenido a la termial TeleNook." << endl;
	cout << "1.- Consultar saldo  2.- Retirar creditos  3.- Ingresar creditos" << endl;
	cout << "Cual de nuestros servicios quieres usar?: "; cin >> servicios;

	switch (servicios) {
	case 1:
		cout << "Tu saldo es de: " << saldo << " millas." << endl;
		break;
	case 2:
		cout << "Cuantos creditos deseas retirar?: "; cin >> InOut;
		if (saldo < InOut) {
			cout << "No tienes las millas suficientes para retirar esa cantidad." << endl;
		}
		else {
			saldo = saldo - InOut;
			cout << "Creditos retirados correctamente." << endl;
			cout << "Su saldo actual es de: " << saldo << " millas." << endl;
		}
		break;
	case 3:
		cout << "Cuantos creditos desea ingresar?: "; cin >> InOut;
		saldo = saldo + InOut;
		cout << "Creditos ingresados correctamente, su saldo actual es de: " << saldo << " millas." << endl;
		break;
	}
	
	cout << "Estamos teniendo fallas tecincas por el momento, si desea utilizar otro servicio por favor reinicie la terminal.";
	return 1;
}

