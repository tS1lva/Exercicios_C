#include <iostream>
#include <iomanip>
#include <stdlib.h>
using namespace std;

int main(){
    int N;
    float *vetor, *Pvet, *Pmaior, *Pmenor;

    cout<<"N: ";
    cin>>N;

    vetor = (float*) calloc (N, sizeof(float));
    
    if (vetor == NULL){
        cout<<"\nmemoria nao alocada";
    }else{cout<<"\nmemoria alocada";}

    cout<<"\nValores do vetor:\n";
    for (int i=0 ; i< N ; i++){
        cin>>vetor[i];
    }

    cout<<"\n&&&& ENDERECOS &&&&";
    for(int i=0; i<N; i++){
        if (i == 0){
            Pmaior = &vetor[i];
            Pmenor = &vetor[i];
        }else{
            if(vetor[i] > *Pmaior){
                Pmaior = &vetor[i];
            }else if (vetor[i]< *Pmenor){
                Pmenor = &vetor[i];
            }
        }
    cout<<"\n"<<&vetor[i];

    }

    cout<<"\n\nMaior numero: "<<*Pmaior;
    cout<<"\nEndereco: "<<Pmaior;
    cout<<"\n\nMenor numero: "<<*Pmenor;
    cout<<"\nEndereco: "<<Pmenor;


    return 0;

}