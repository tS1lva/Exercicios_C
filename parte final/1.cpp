#include <iostream>
#define TAMANHO 100

using namespace std;


struct produto{
    int codigo;
    char nome[30];
    int quantidade;
    float preco;
};

void preenche_produto(int *n, produto p[]);

void atualiza_produto(int n, produto p[]);

void imprime_produto(int n, produto p[]);


int main(){

    
    int n;
    produto product[TAMANHO];

    preenche_produto(&n, product);
    atualiza_produto(n, product);
    imprime_produto(n, product);

    return 0;
}

void preenche_produto(int *n, produto p[]){
    int i;
    cout<<"Digite quantos produtos: ";
    cin>>*n;

    for(i=0; i<*n ; i++){
        cout<<"\nCodigo: ";
        cin>>p[i].codigo;
        cout<<"\nNome: ";
        cin.ignore();
        cin.getline(p[i].nome, 30);
        cout<<"\nQuantidade: ";
        cin>>p[i].quantidade;
        cout<<"\nPreco: ";
        cin>>p[i].preco;
    }
}

void atualiza_produto(int n, produto p[]){
    int cod, add, i;
    cout<<"\nDigite o codido do produto que deseja alterar: ";
    cin>>cod;
    cout<<"\nDigite a quantidade que deseja adicionar ao produto: ";
    cin>>add;

    for (i=0 ; i<n ; i++){
        if(cod == p[i].codigo){
            p[i].quantidade += add;
        }
    }

}

void imprime_produto(int n, produto p[]){
    cout<<"\nI M P R E S S A O  D O S P R O D U T O S";

    for(int i=0 ; i<n ; i++){
        cout<<"\nCodigo: ";
        cout<<p[i].codigo;
        cout<<"\nNome: ";
        cout<<p[i].nome;
        cout<<"\nQuantidade: ";
        cout<<p[i].quantidade;
        cout<<"\nPreco: ";
        cout<<p[i].preco;
        cout<<"\n-----------------------------------";
    }
    
}