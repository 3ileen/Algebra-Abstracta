#include <iostream>
#include<string>
using namespace std;

int main(int argc, char *argv[]) {
	
	string original("eileen");
	string oculto("xxxxxx");
	string letra,alm,ahorcado;
	
	oculto.swap(original);
//	cout<<original;
	int pos=otiginal[rdm].find(letra);
	
	for(int i=0;i<=original.length();i++){
		cout<<"Escriba una letra: ";
		cin>>letra;
		
		if (pos !=origial){
			cout<<"Si"<<endl;
			alm.append(letra);
			
		}
		else{
			cout<<"No"<<endl;
			//switch(i){
			if (i == 0)
			{
				cout << " O";
			}
			else if (i == 1)
			{
				cout << " O\n/";
			}
			else if (i == 2)
			{
				cout << " O\n/|";
			}
			else if (i == 3)
			{
				cout << " O\n/|\\";
			}
			else if (i == 4)
			{
				cout << " O\n/|\\\n |";
			}
			else if (i == 5)
			{
				cout << " O\n/|\\\n |\n/";
			}
			else if (i == 6)
			{
				cout << " O\n/|\\\n |\n/ \\";
			}
		}
		if(alm==oculto){
			cout<<"Felicidades!!! Adivino mi palabra. Desea jugar otra vez? si/no:";
		}
		else{
			cout<< ahorcado;
		}
		
	}
	
	
	
	
	
	
	return 0;
}

