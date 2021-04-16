//String to int
#include <iostream>
#include<string>

using namespace std;

void strTint(string s){
	int entero = stoi(s); 
	cout << entero <<endl;
}

int main()
{
	string n;
	cout<<"Ingrese un numero: ";
	getline(cin,n);
	
	cout<<"El numero convertido a entero seria: ";
	strTint(n);

	return 0;
}
