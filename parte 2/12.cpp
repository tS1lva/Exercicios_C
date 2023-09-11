#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char nome[30];
    cout<<"Digite seu nome: ";
    cin.getline(nome, 30);
    cout<<"Bom dia, "<<nome<<"! Tudo bem?";
    return 0;
}