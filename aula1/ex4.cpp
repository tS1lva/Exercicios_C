#include <iostream>
using namespace std;

///Leitura de dois numeros e operacao aritmetica

int main(){
    int numero1, numero2, soma;
    cout<< "Digite UM numero inteiro: ";
    cin>> numero1;
    cout<< "Digite OUTRO numero inteiro: ";
    cin>> numero2;

    soma = numero1 + numero2 ;
    
    cout << "\n\n --- RESULTADO ";

    cout << numero1 << " + " << numero2 << " = " << soma;

    return 0;


}