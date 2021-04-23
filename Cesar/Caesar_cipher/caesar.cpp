


#include "caesar.h"


using namespace std;




int modulo(int a,int n){
    int r=a-((a/n)*n);
    if(r <0){
        r=a-(((a/n)-1)*n);
    }
    else{
        return r;
    }
}


Caesar::Caesar(int _key){ //constructor
    key=_key;
    abc="abcdefghijklmnopqrstuvwxyz";
}

string Caesar::encryp(string txt){
    string destino;
    int i=0;
    char val;
    while(i<txt.size()){
        int pos=abc.find(txt[i]);

        if(pos != string::npos){
            val=abc[modulo( pos+key,abc.size())];
        }
        else{
            val=txt[i];
        }
        destino.push_back(val);
        i++;
    }

    return destino;

}

string Caesar::decode(string txt){
    string destino;
    int i=0;
    char val;
    while(i<txt.size()){
        int pos=abc.find(txt[i]);
        if(pos != string::npos){
            val=abc[modulo(pos-key,abc.size())];
        }
        else{
            val=txt[i];
        }
        destino.push_back(val);
        i++;
    }

    return destino;
}

