#include <iostream>
#include <string>
#include <vector>
using namespace std;


int main(int argc, char *argv[]) {
	

	string cad; //cadena
	vector<string> v_str;
	int crc;  //bloques
	
	//inciso 1a
	cout<<"Ingrese la cadena: ";
	getline(cin,cad);
	
	//inciso 1b
	cout<<"Ingrese el numero de caracteres: ";
	cin>>crc;
	
	//inciso 1d
	while(cad.length()%crc != 0){
		cad.resize(cad.size()+1,'X');
	}
	
	//inciso 1c
	int aux=0,aux2=0;
	for(int i=0;i<cad.length()/crc;i++){
		for(int j=0;j<crc;j++){
			
			cout<<cad[aux2];
			v_str.push_back(aux);
			aux2++;
		}
		cout<<endl;
	}
	
	//inciso 1e
	for (int i=1; i<cad.size()/crc; i++){
		cad.insert((crc*i), "*");
	}
	cout<<cad;
	
	//inciso 1f
	
	
	
	return 0;
}














