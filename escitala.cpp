#include<iostream>
#include<string>
using namespace std;

int main(){

    int f, c, k=0, len=0;

    string mensaje;
    //parte de cifrado del mensaje *******
    cout<<"Escriba el mensaje  a cifrar: \n";
    getline(cin,mensaje);

    cout<<"Ingresar el tamaño del mensaje\n";
    cout<<"\nNumero de Filas: ";
    cin>>f;

    cout<<"\nNumero de Columnas: ";
    cin>>c;
    len=mensaje.length();

    if(len <= f*c){
        char cifrado[f][c];
        for (int i=0 ; i<f ; i++){
          for (int j=0 ; j<c ; j++){
              cifrado[i][j] = mensaje[k++];
             }
        }

        cout<<"El mensaje queda de la siguiente manera: \n"<<endl;
        for (int i=0 ; i<c ; i++){
            for (int j=0 ; j<f ; j++){
                cout<<cifrado[j][i];
                }
            }
        }

    //parte de decifrado del mensaje   ******
    cout<<"Escriba el mensaje  a decifrar: \n";
    getline(cin,mensaje);
    cout<<"Ingresar el tamaño del mensaje:\n";
    cout<<"\nNumero de Filas: ";
    cin>>f;

    cout<<"\nNumero de Columnas: ";
    cin>>c;

    len=mensaje.length();
    if(len <= f*c){
        char decifrado[f][c];
        for (int i=0 ; i<c ; i++){
            for (int j=0 ; j<f ; j++){
                decifrado[j][i] = mensaje[k++];
            }
        }
        cout<<"El mensaje descifrado es: \n";
        for (int i=0 ; i<f ; i++){
            for (int j=0 ; j<c ; j++){
                cout<<decifrado[i][j];
            }
        }
    }
}
