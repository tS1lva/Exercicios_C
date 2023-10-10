#include <iostream>
#include <iomanip>
#include <stdlib.h>
using namespace std;

typedef struct {
   int ra;
   char nome[31];
   float nota;

}aluno;
typedef aluno elemento;

typedef struct no{
    elemento info;
    no * link;
}no;

///-----------------------------------------------------------------------
/// inicia a estrutura vazia
///-----------------------------------------------------------------------
no* init(){
    return NULL;
}
///-----------------------------------------------------------------------
/// faz a leitura de dados de UM aluno - especifica ao problema ALUNO
///-----------------------------------------------------------------------
elemento ler_aluno(){
    elemento a;
    cout<<"\n>>RA: "; cin>>a.ra;
    cin.ignore();
    cout<<">>Nome:";cin.getline(a.nome,31);
    cout<<">>Nota: "; cin>>a.nota;
    return a;
}


int validar(no* pri, int ra){
    no* p;
    for(p=pri ; p!=NULL ; p=p->link){
        if(ra == p ->info.ra){
            return 1;
        }
    }
    return 0;
}


int main(){
    no* lista ;int n;float nota;
    elemento valor; int ra_busca, aluno_existe;
    lista = init();
    cin>>n;
    cin>>ra_busca;
    for (int i =1 ; i<n ; i++){
        valor = ler_aluno();
        inserir(&lista , valor);

    }


    return 0;
}