#include <iostream>
using namespace std;

void Funtion(int a,int n){
	int cos =a/n;  
	int res=a-(cos*n); 
	if(res <0){  
		if (cos<0){
			--cos; 
			res=a-(cos*n); 
		}
		else(cos>0){
			++cos;
			res=a-(cos*n);
		}
	}
	//imprimimos el cociente y el residuo
	cout<< "cociente: "<<cos<<endl;
	cout<< "residuo: "<<res<<endl;
}
	
	int main() {
		Funtion(-255,11);
		return 0;
	}

	
