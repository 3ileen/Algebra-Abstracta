#include <iostream>
#include <string>

using namespace std;

/*--------------CRIPTOANALISIS---------------------*/



int modulo(int a,int n){
    int r=a-((a/n)*n);
    if(r <0){
        r=a-(((a/n)-1)*n);
    }
    else{
        return r;
    }
}


void hack_caesar(string txt){

    string alfabeto="abcdefghijklmnopqrstuvwxyz";
    int rotador=0;

    while(rotador<alfabeto.size()){

        string destino;
        int i=0;
        char val;
        while(i<txt.size()){
            int pos=alfabeto.find(txt[i]);
            if(pos != string::npos){
                val=alfabeto[modulo(pos-rotador,alfabeto.size())];
            }
            else{
                val=txt[i];
            }
            destino.push_back(val);
            i++;

        }
        cout<<"ROT "<<rotador<<": "<<destino<<endl;


        rotador++;
    }

}




int main() {

    string frase;
    int key;
    cout<<"Ingrese frase: ";
    getline(cin,frase);

    cout<<"\nCRIPTOANALISIS CESAR "<<endl;
    hack_caesar(frase);




    return 0;
}
