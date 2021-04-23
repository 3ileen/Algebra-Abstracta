#include <iostream>
#include "caesar.h"

using namespace std;

int main() {

    string frase;
    int key;
    cout<<"Ingrese frase: ";
    getline(cin,frase);

    cout<<"Ingrese la clave: ";
    cin>>key;

    Caesar Emisor(key),Receptor(key);

    cout<<"Mensaje cifrado: "<<Emisor.encryp(frase)<<endl;
    cout<<"Mensaje decifrado: "<<Receptor.decode(Emisor.encryp(frase))<<endl;

    return 0;
}
