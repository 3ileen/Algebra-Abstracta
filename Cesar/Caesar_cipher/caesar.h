
#ifndef CAESAR_CIPHER_CAESAR_H
#define CAESAR_CIPHER_CAESAR_H


#include<string>
using namespace std;


int modulo(int a,int n);

class Caesar{
private:
    int key;
    string abc;
public:
    Caesar(int); //contructor
    Caesar();//destructor

    string encryp(string);
    string decode(string);
};




#endif //CAESAR_CIPHER_CAESAR_H
