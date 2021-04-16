/*Ejercicio 18.12
Escriba un programa que introduzca por separado un primer 
nombre y un apellido, y que copncatene los dos en un nuevo objeto string.*/

#include <iostream>
using namespace std;

void concatenacion(string a, string b){
	cout<< a+ " " +b << '\n';
	
	
}
int main(int argc, char *argv[]) {
	
	string nombre,apellido;
	cout<<"Escriba el nombre: ";cin>>nombre;
	cout<<"Escriba el apellido: ";cin>>apellido;
	
	concatenacion(nombre,apellido);
	return 0;
}

