///Construir um programa que faz a leitura de: dois números inteiros, representando a altura e a base de um quadrilátero. Calcula a área do quadrilátero. Imprime: valores lidos e o calculado.
#include <iostream>

using namespace std;

int main(){
    int lado1, lado2, area;
    cout <<"Calculo da area de um quadrilatero! \n";
    cout<< "Digite o primeiro lado: ";
    cin>> lado1;
    cout<< "Digite o segundo lado: ";
    cin>> lado2;
    area = lado1 * lado2;
}
