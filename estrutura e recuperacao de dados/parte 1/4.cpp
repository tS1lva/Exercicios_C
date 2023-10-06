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
    cin>>*N;
    aux = (t_aluno*)calloc(*N, sizeof(t_aluno));


    for(int i=0; i<*N ; i++){
        aux[i].ra;
        aux[i].nome;
        aux[i].n
    }
    
}

int main(){
    t_aluno *v_aluno;
    int n;
    cout<<"N: ";
    cin>>n;

    v_aluno = (t_aluno*)malloc(n * sizeof(alu));
    if (v_aluno == NULL){
        cout<<"ERRO de alocacao";exit(1);
    }
    cout<<"\n";
    cout<<&aluno[0];
    cout<<"\n";
    cout<<&aluno[1];
    cout<<"\n";
    cout<<&aluno[20];

    return 0;

}

