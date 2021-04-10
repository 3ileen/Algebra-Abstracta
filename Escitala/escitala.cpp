#include<iostream>
#include<string>
using namespace std;
class cifradoEscitala{
private:
	int f, c, k=0, len=0;
public:
	void cifrado(string &mensaje, int fil,int col){
		
		int f=fil, c=col, k=0, len=0;
		len=mensaje.length();
		if(len <= f*c){ //verificamos si el tamaño del mensaje es menor o igual que el producto de la "mattriz"
		char cifrado[f][c];
		for (int i=0 ; i<f ; i++){ 
			for (int j=0 ; j<c ; j++){
				cifrado[i][j] = mensaje[k++]; 
			}
		}
		
		cout<<"El mensaje queda de la siguiente manera: \n"<<endl;
		for (int i=0 ; i<c ; i++){ 
			for (int j=0 ; j<f ; j++){
				cout<<cifrado[j][i];
			}
		}
	}


}
	void descifrado(string &mensaje,int fil,int col){
		int f=fil, c=col, k=0, len=0;
		len=mensaje.length();
		if(len <= f*c){
			char decifrado[f][c];
			for (int i=0 ; i<c ; i++){
				for (int j=0 ; j<f ; j++){
					decifrado[j][i] = mensaje[k++];
				}
			}
			cout<<"El mensaje descifrado es: \n";
			for (int i=0 ; i<f ; i++){
				for (int j=0 ; j<c ; j++){
					cout<<decifrado[i][j];
				}
			}
		}
		
		
	}
	

};

int main(){
	cifradoEscitala Emisor; 
	cifradoEscitala Receptor;
	
	string message ;
	int filas, columnas;
	
	cout<<"Escriba el mensaje  a cifrar: \n";
	getline(cin,message);
	cout<<"Ingresar el tamanio del mensaje\n";
	cout<<"\nNumero de Filas: ";
	cin>>filas;
	cout<<"\nNumero de Columnas: ";
	cin>>columnas;
	
	Emisor.cifrado(message,filas,columnas); 
	
	cout<<"Mensaje Cifrado: "<< message <<endl;
	
	cout<<"Escriba el mensaje  a decifrar: \n";
	getline(cin,message);
	cout<<"\nNumero de Filas: ";
	cin>>filas;
	cout<<"\nNumero de Columnas: ";
	cin>>columnas;
	Receptor.descifrado(message,filas,columnas);
	cout<<"Mensaje original: "<<message<<endl;
	
	


	
	
	
	

	
	
	
}
