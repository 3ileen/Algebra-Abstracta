#include <iostream>
#include<string>

using namespace std;

class cifradoRailFence{
private:
	int clave=3;

public:

	void cifrado(string &message){	
		
		string copy =message; //copia del mensaje
		message="";
		int cont=0; //sube o baja 
		int saltos=0;
		int n=copy.length(); //longitud del mensaje copia
		for(int i=0;i<clave;++i){ // avanza hasta la clave 3
			for(int j=i;j<n;j+=saltos){
				message+=copy[j]; //añadiendo al mensaje
				cont++;
				if (i==0 or i==clave-1){  //cuando se encuentra en el borde superior e inferior
					saltos=2*clave-2;
				}
				else if (cont%2==0){  //sube
					saltos=2*i;
				}
				else{ //baja
					saltos=2*(clave-i)-2;
					
				}
			}
		}

	}
		
	void descifrado(string &message) 
	{
		string copy(message.length(),' '); 
		int avan=0; //avanzar en el mensaje
		for (int i = 0; i < clave; ++i) {
			int cont=0;
			int saltos=0;
			for (int j = i; j < copy.size(); j=j+saltos) {
				copy[j] = message[avan]; 
				cont++;
				avan++;
				if (clave-1==i || i==0){
					saltos=2*clave-2;
				}
				else if (cont%2==0){
					saltos=2*i;
				}
				else{
					saltos=2*(clave-i)-2;
					
				}
			}
		}
		message=copy; 
	}	
};

int main() {
	cifradoRailFence Emisor; 
	cifradoRailFence Receptor;
	
	string mensaje = "This is a secret message";
	cout<<"Mensaje: "<<mensaje <<endl;
	Emisor.cifrado(mensaje); 
	cout<<"Mensaje Cifrado: "<< mensaje <<endl;

	Receptor.descifrado(mensaje);
	cout<<"Mensaje original: "<<mensaje<<endl;
}


