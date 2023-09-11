#include <iostream>

using namespace std;

int main(){
    float temp_F, temp_C;
    cout<< "Calculador de Graus Celsius \n";
    cout<< "_____________________\n";
    cout<< "Digite a temperatura uma temperatura em Fahrenheit\n";
    cin>> temp_F;
    ///cast float (float)5/9
    temp_C = (float(5) / 9) * (temp_F - 32);
    cout<< "A temperatura em graus C e "<< temp_C <<".";

    return 0;
}