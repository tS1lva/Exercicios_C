#include <iostream>
#include <iomanip>
#include <stdlib.h>
using namespace std;

typedef struct{
    int ra;
    char nome[20];
    float nota;
}t_aluno;

t_aluno* leitura (int *N){
    t_aluno *aux;

    cout<<"N: ";
    cin>>*N;
    aux = (t_aluno*)malloc(*N * sizeof(t_aluno));
    
    for(int i=0; i<*N ; i++){
        cout<<"\nRA:\n";
        cin>>aux[i].ra;
        cout<<"\nNome:\n";
        cin>>aux[i].nome;
        cout<<"\nNota:\n";
        cin>>aux[i].nota;
    }
    return aux;
    
}


float media(int N, t_aluno *v){
    float media = 0;
    float soma = 0;
    int quantidade = N;

    for (int i=0 ; i<N ; i++ ){
        soma += v[i].nota;
    }
    media = soma/quantidade;

    return media;

};

void imprime_aluno(int N, t_aluno *v){
    cout<<"\n\nIMPRESSAO DOS ALUNOS\n";

    cout<<"NOME           RA           NOTA\n";
    for(int i=0 ; i<N ; i++){
        cout<<v[i].nome<<"        "<<v[i].ra<<"         "<<v[i].nota;
        cout<<"\n";
    }
}


int main(){
    t_aluno *v_aluno;
    int n;
    float mediaa;

    v_aluno = leitura(&n);
    mediaa = media(n, v_aluno);
    cout<<"\nValor medio das notas:\n";
    cout<<mediaa;
    imprime_aluno(n, v_aluno);


    return 0;

}

