#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    	int numero;
	do {
		cout << "Precione la opsion (1) (Biografia) o (2) (Salir)" << endl;
		cin >> numero;

		if (numero == 1) {
			cout << "Hola... Me presento mi nombre es Emanuel Antonio Burgos Chavez" << endl;
			cout << "tengo 22 años, nacido en la ciudad de Cochabamba-Bolivia. Actualmente" << endl;
			cout << "radico en la ciudad de Sucre-Bolivia desde 2017. Estudio" << endl;
			cout << "la carrera de ingenieria de sistemas en la Universidad Mayor, Real y Pontificia de San Francisco Xavier de Chuquisaca." << endl;
		}
		else
		{
			cout << "Muchas gracias, hasta pronto." << endl;
		}
		numero = numero;
	} while (numero == 1);
	system("pause");
}