/*18.19 Escriba un programa que inserte los caracteres "******" en la mitad exacta de un objeto string.*/
#include <iostream>
using namespace std;
void insertar(string s){
	string ast("******");
	s.insert(s.length()/2,ast);
	cout<<s;
}
int main(int argc, char *argv[]) {
	string word;
	cout<<"Escriba la palabra: ";
	cin>>word;
	
	insertar(word);
	
	return 0;
}

