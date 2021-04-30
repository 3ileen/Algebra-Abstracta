#ifndef AFIN_H
#define AFIN_H
#include<string>

using namespace std;
class Afin
{
  private:
        int a,b;
        int aleatorio();
        void generarClave();

    public:
        Afin();
        Afin(int x, int y);
        ~Afin();
        string alfabeto="abcdefghijklmnopqrstuvwxyz";

        int mod(int a, int n);
        int mcd(int a, int b);
        int mcd_extendido(int a, int b,int &x, int &y);
        int inverso(int a, int b);

        string cifrado(string);
        string decode(string);


};

#endif // AFIN_H
