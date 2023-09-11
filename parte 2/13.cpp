#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char palavra[100];
    int i, q_letras;
    do{
        cout<<" : ";
        cin.ignore();
        cin.getline(palavra, 100);
        q_letras = 1;
        q_letras += strlen(palavra);
        cout<<q_letras;
    }while(q_letras<4 || q_letras>10);

    ///for(i=0 ; i<)


    return 0;   
}