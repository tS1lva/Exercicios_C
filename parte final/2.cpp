#include <iostream>
#define TAM 100

using namespace std;

struct aluno{
    char ra[10];
    char nome[50];
    float nota;
};

void leitura_aluno(int *n, aluno a[]){
    cout<<"\nQuantidade de alunos: ";
    cin>>*n;
    cout<<"\nDados Aluno:";

    for (int i=0 ; i<*n ; i++){
        cout<<"\nRA: ";
        cin>>a[i].ra;
        cout<<"\nNome: ";
        cin.ignore();
        cin.getline(a[i].nome, 50);
        cout<<"\nNota: ";
        cin>>a[i].nota;
    }
}

aluno maior_nota(int n, aluno a[]){
    aluno aluno_maior_nota;
    int maior_nota = 0, i;

    for(i=0 ; i<n ; i++){
        if(a[i].nota >= maior_nota){
            maior_nota = a[i].nota;
            aluno_maior_nota = a[i];
        }
    }

    return aluno_maior_nota;
}

void imprime_aluno(aluno a){
    cout<<"\nInformacoes do Aluno";
    cout<<"\nRA ";
    cout<<a.ra;
    cout<<"\nNome ";
    cout<<a.nome;
    cout<<"\nNota ";
    cout<<a.nota;
}

int main(){
    aluno alunos[TAM], aluno_com_maior_nota; 
    int n;

    leitura_aluno(&n, alunos);
    aluno_com_maior_nota = maior_nota(n, alunos);
    imprime_aluno(aluno_com_maior_nota);

    return 0;
}
