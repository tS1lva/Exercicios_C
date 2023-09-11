#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int x, y, z;
    cout<< "Digite o valor de x: ";
    cin>> x;
    cout<< "\nDigite o valor da potencia de " << x << ": ";
    cin>> y;
    z = pow(x,y);
    cout<< "\nO resultado foi " << z << ".";

    return 0;
}