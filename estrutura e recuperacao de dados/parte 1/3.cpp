#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;

void aloca_vetor (int *n, float* *vetor){ //para retornar um vetor pela lista de parametros, é necessário declarar float* *vetor
    cout<<"Digite n: ";
    cin>>*n;

    *vetor = (float*) calloc (*n, sizeof(float));

    for (int i=0 ; i<*n ; i++){
        cout<<"\n";cin>>(*vetor)[i];
    }
};

void imprime_vetor (int n, float *vetor){
    cout<<"\nImpressao do vetor:\n";
    for (int i=0 ; i<n ; i++){
        cout<<vetor[i];
    }
}



int main(){
    int N;
    float *VETOR;

    aloca_vetor(&N, &VETOR);
    imprime_vetor(N, VETOR);


    return 0;
}