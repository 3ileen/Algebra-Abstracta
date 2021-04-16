/*18.22 Escriba un programa que introduzca una línea de texto y la imprima al revés. Use iteradores en su solución.*/
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	string txt;
	cout<<"Ingrese el texto: ";
	getline(cin,txt);
	
	reverse_iterator i= txt.end();
	cout<<"Invertido: ";
	while ( i != txt.begin()) 
	{
		cout<<*i;
		--i
	}
	cout<<endl;
	
	return 0;
}

