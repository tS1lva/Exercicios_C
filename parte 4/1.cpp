#include <iostream>

using namespace std;

//Declarando a funcao
//tipo | nome | parametros
//corpo funcao
//return

float volume_cilindro (float raio, float alt){
    float pi = 3.14;
    float vol_cil = raio *raio * pi * alt;
    return vol_cil;
}

int main(){
    float vol_cil;
    float r, a;

    cout<<"\nDigite o raio ";
    cin>>r;
    cout<<"\nDigite a altura ";
    cin>>a;

    vol_cil = volume_cilindro(r, a);

    cout<<"\nVolume = "<<vol_cil;

    return 0;
}