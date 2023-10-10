#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;

float * aloca_vetor(int *n){
    float * v_aux;
    cout<<"\nDigite a quantidade de notas: ";
    cin>>*n;

    v_aux = (float*) calloc (*n, sizeof(float));

    if(v_aux == NULL){
        cout<<"\nMemoria nao alocada!";return 0;
    }else{
        cout<<"\nMemoria alocada!\n"; 
        
        cout<<"Notas:\n";
        for(int i=0 ; i<*n ; i++){
            cin>>v_aux[i];
        }
        return v_aux;
    }
};

void imprime_vetor(int n, float v[]){
    cout<<"\nImpressao do Vetor:";
    for (int i=0; i<n ; i++){
        cout<<"\n";
        cout<<v[i];
    }
};


float * nota_mais_repetida(int n, float vetor[]){
    float *nota;
    int conta = 0;
    int conta_aux = 0;

    for (int i=0 ; i<n ; i++){
        conta = 0;
        for(int j=0 ; j<n ; j++){
            if(vetor[i] == vetor[j]){
                conta+=1;
                if(conta>conta_aux){
                    if(vetor[i] > *nota){
                        nota = &vetor[i];
                        conta_aux = conta;
                    }
                }
            }
        
        }
    }

    return nota;

};

int main(){
    int N;
    float *vetor;
    float *notaa;

    vetor = aloca_vetor(&N);
    imprime_vetor(N, vetor);
    notaa = nota_mais_repetida(N, vetor);
    cout<<"\n Nota mais repetida: ";
    cout<<*notaa;  
    return 0;

}