/*18.21 Escriba un programa que introduzca una línea de texto, 
reemplace todos los signos  de puntuación con espacios y utilice
la función strtok de la biblioteca de cadenas estilo C 
para dividir el objeto string en palabras individuales (tokens).*/
#include <iostream>
#include<string>
#include<cstring>
using namespace std;
void reemplace(string s){
	//int posicion= s.find();
	int i=0;
	while(i < s.length()){
		
		if (s[i] == '.' or s[i] == ',' or s[i] == ';' or s[i] == ':' or s[i] == '?' or
			s[i] == '!' or s[i] == '(' or s[i] == ')' or s[i] == '[' or s[i] == ']' or
			s[i] == '-' or s[i] == '_' or s[i] == '*' or s[i] == '*' or s[i] == '{' or
			s[i] == '}') {
			s.replace(i, 1, " ");
		}
		++i;
	}
	cout<<"EL texto quedaria asi: "<<s<<endl;
	
}
	
	void tok(string s){
		char str[s.size()];
		strcpy(str,s.c_str());
		char *token = strtok(str, " ");
		while (token)
		{
			cout << token << endl;
			token = strtok(NULL," ");
		}
	}
		int main() {
			string txt;
			cout<<"Ingrese una linea de texto: ";
			getline(cin,txt);
			reemplace(txt);
			tok(txt);
			
			return 0;
		}

