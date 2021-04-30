#include <iostream>
#include "Afin.h"
#include "afin.cpp"

using namespace std;

int main() {
    string frase;

    cout<<"Ingrese frase: ";
    getline(cin,frase);

    Afin Emisor;
    cout<<"Mensaje cifrado: "<<Emisor.cifrado(frase)<<endl;

    int a,b;
    cout<<"Ingrese la clave a: "<<endl;
    cin>>a;
    cout<<"Ingrese la clave b: "<<endl;
    cin>>b;

    Afin Receptor(a,b);
    cout<<"Mensaje descifrado: "<<Receptor.decode(Emisor.cifrado(frase))<<endl;


    return 0;

}
