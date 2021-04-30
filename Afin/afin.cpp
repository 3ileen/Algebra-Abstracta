#include "Afin.h"
#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<string>


Afin::Afin()
{
    generarClave();
    //ctor
}
Afin::Afin(int x, int y)
{
    a=inverso(x,alfabeto.size());
    b=y;

}

Afin::~Afin()
{
    //dtor
}

int Afin::mod(int a,int n){
    int r=a-((a/n)*n);
    if(r <0){
        r=a-(((a/n)-1)*n);
    }
    else{
        return r;
    }
}

int Afin::mcd(int a, int b){
    while(b!=0){
        int aux=b;
        b=mod(a,b);
        a=aux;
    }
    return a;

}

int Afin::mcd_extendido(int a, int b, int& x, int& y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    int x1, y1;
    int d = mcd_extendido(b, a % b, x1, y1);
    x = y1;
    y = x1 - y1 * (a / b);
    return d;
}


int Afin::inverso(int a, int b){
    if(mcd(a,b)==1){
        int x,y;
        mcd_extendido(a,b,x,y);
        int inverse=mod(x,b);
        return inverse;

    }
}

int Afin::aleatorio(){
    srand(time(NULL));

    int num=1+rand()%(300-1);

    return num;
}

void Afin::generarClave(){
    int x;
    do{
        x=aleatorio();

    }while(mcd(x,alfabeto.size())!=1);
    a=x;
    b=mod(aleatorio(),alfabeto.size());

}


string Afin::cifrado(string txt){
    string txtcifrado;

    cout<<"clave a"<<" "<<a<<endl;
    cout<<"clave b"<<" "<<b<<endl;

    int i=0;
    char val;
    while(i<txt.size()){
        int pos=alfabeto.find(txt[i]);

        if(pos != string::npos){
            val=alfabeto[mod(a*pos+b,alfabeto.size())];

        }
        else {
            val=txt[i];
        }
        txtcifrado.push_back(val);
        i++;
    }
    return txtcifrado;
}

string Afin::decode(string txt){
    string txtdescifrado;
    int i=0;
    char val;
    while(i<txt.size()){
        int pos=alfabeto.find(txt[i]);
        if(pos!= string::npos){
            val=alfabeto[mod(a*(pos-b),alfabeto.size())];
        }
        else{
            val=txt[i];
        }
        txtdescifrado.push_back(val);
        i++;
    }
    return txtdescifrado;
}












