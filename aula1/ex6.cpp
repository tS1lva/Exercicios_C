#include <iostream>

using namespace std;

int main(){
    int dividendo, divisor, quo, resto;
    cout<< "Digite um numero inteiro: ";
    cin>> dividendo;
    cout<< "\nDigite outro numero inteiro: ";
    cin>> divisor;
    quo = dividendo / divisor;
    resto = dividendo % divisor;
    cout<< "\n\nO Quoeciente e igual a " << quo << " e o resto da divisao e igual a " << resto << ".";
    

    return 0;
}   