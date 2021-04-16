//Ejercicio 18.7
#include <iostream>
#include <string>
	using namespace std;
string abecedario="abcdefghijklmnopqrstuvwxyz";
class cifradoTrece {
	int key=13;
public:
	void cifrado(string &txt) 
	{
		int len=txt.size();
		for (int i=0; i<len; i++){
			int pos=abecedario.find(txt[i]);
			if (pos+key > 25){
				txt[i]=abecedario[pos+key-26];
			}
			else{
				txt[i]=abecedario[pos+key];
			}
		}
	}
	void descifrado(string &txt) 
	{
		int len=txt.size();
		for (int i=0;len ; i++){
			int pos=abecedario.find(txt[i]);
			if (pos-key < 0){
				txt[i]=abecedario[pos-key+26];
			}
			else{
				txt[i]=abecedario[pos-key];
			}
		}
	}
};
int main()
{
	cifradoTrece Emisor;
	cifradoTrece Receptor;
	string mensaje = "hola";
	Emisor.cifrado(mensaje);
	cout << mensaje<<endl;
	Receptor.descifrado(mensaje);
	cout << mensaje<<endl;
}
