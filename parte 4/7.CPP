#include <iostream>
using namespace std;
//ALGEBRA ERRADA
void ler_coeficientes(int v[]){
    
    cout<<"A = ";cin>>v[0];
    cout<<"B = ";cin>>v[1];
    cout<<"C = ";cin>>v[2];
    cout<<"D = ";cin>>v[3];
    cout<<"E = ";cin>>v[4];
    cout<<"F = ";cin>>v[5];

}

int sistema(int v[], float *x, float*y){
    int divisao_por_zero = 1;
    if((v[0]*v[4])-(v[1]*v[5]) == 0){
    divisao_por_zero = 1;
    }else{
        *x = ((v[2]*v[4])-(v[1]*v[5]))/((v[0]*v[4])-(v[1]*v[5]));
        *y = ((v[2]*v[4])-(v[1]*v[5]))/((v[0]*v[4])-(v[1]*v[5]));
    }

    if(divisao_por_zero){
        return 0;
    }else{
        return 1;
    }
}

