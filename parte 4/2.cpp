#include <iostream>
using namespace std;

float comp_arco (float raio, float ang){
    float pi = 3.14, comprimento;
    comprimento = (ang * pi * raio)/180;
    return comprimento;
}

int main(){
    float raio_c, angulo, comprimento_arco;

    cout<<"Raio circunferencia: ";
    cin>>raio_c;
    cout<<"\nAngulo em graus ";
    cin>>angulo;
    
    comprimento_arco = comp_arco(raio_c, angulo);
    cout<<"\nComprimento do arco = "<<comprimento_arco;
    return 0;
}

