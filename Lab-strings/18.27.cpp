/*18.27 Escriba una versión de la rutina de ordenamiento por selección (fi gura 8.28)
 que ordene objetos string. Use la función
swap en su solución.*/
#include <iostream>
#include <string>

using namespace std;

string sortSelection(string s){
	int len=s.size();
	string temp(s);
	
	int min=0;
	for(int i=0;i<len;i++){
		min=i;
		for(int j=i;j<len;j++){
			
			if(s[j] < s[min]){
				min=j;
			}
		}
		if (min !=i){
			swap(s[i],s[min]);
		}
	}
	return s;
}
	void print(string  s){
		for(int i=0;i<s.size();i++){
			cout<<s[i]<<" ";
		}
	}

int main(int argc, char *argv[]) {
	string word;
	cout<<"Ingrese su texto: ";
	getline(cin,word);
	
	
	cout<<"Con ordenamiento: "<<sortSelection(word);
	
	return 0;
}

