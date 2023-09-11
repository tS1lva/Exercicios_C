#include <iostream>
#include <string.h>
using namespace std;

struct prod
{
    int cod, qtd_est;
    char nome[51];
    float preco;
};

int main(){
    int n_produtos, i;
    cout<<"Quantos produtos deseja cadastrar? ";
    cin>>n_produtos;
    prod produtos[n_produtos];

    for(i=0 ; i<n_produtos ; i++){
        cout<<"\nProduto "<<i+1;
        cout<<"\n\tCodigo: ";
        cin>>produtos[i].cod;
        cin.ignore();
        cout<<"\n\tNome: ";
        cin.getline(produtos[i].nome, 51);
        cout<<"\n\tPreco: ";
        cin>>produtos[i].preco;
        cout<<"\n\tQuantidade em estoque: ";
        cin>>produtos[i].qtd_est;
    }

    cout<<"\nProdutos sem estoque: ";
    for(i=0 ; i<n_produtos ; i++){
        if(produtos[i].qtd_est == 0){
        cout<<"\n\tCodigo   |   "<<produtos[i].cod;
        cout<<"\n\tNome     |   "<<produtos[i].nome;
        cout<<"\n\tPreco    |   "<<produtos[i].preco;
        cout<<"\n\tQtd      |   "<<produtos[i].qtd_est;
        cout<<"\n_______________________________________";
        }

    }

    return 0;
}