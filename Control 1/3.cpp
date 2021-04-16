
#include <iostream>
#include<string>
using namespace std;

void intTstr(int n){
	string num(to_string(n));
	cout <<num;
}
	
	
int main()
{
	int num;
	cout<<"Ingrese un numero: ";cin>>num;
	
	cout<<"El numero convertido a string seria: ";
	intTstr(num);
	
	return 0;
}
