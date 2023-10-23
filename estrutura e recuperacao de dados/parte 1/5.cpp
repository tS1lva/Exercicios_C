#include <iostream>
#include <iomanip>
#include <stdlib.h>
using namespace std;

//usar o typedef
typedef struct{
    int cod;
    char nome[30];
    float preco;
    int qtdd;
}t_prod;

void vetor_produtos(int *n , t_prod* *vetor_prod){
    //recebe um valor e passa ele para o endereco de n
    cout<<"\nDigite a quantidade de produtos: ";
    cin>>*n;
    cin.ignore();
    //aloca o vetor
    *vetor_prod = (t_prod*) calloc (*n, sizeof(t_prod));
    if(*vetor_prod != NULL){cout<<"\nMemoria alocada para o vetor de produtos no endereco: \n"<<&vetor_prod;}
    else{cout<<"\nMemoria nao alocada!";exit(1);};
    //le as informacoes do vetor
    cout<<"\nDigite as informacoes dos produtos:";
    for(int i=0 ; i<*n ; i++){
        cout<<"\nCodigo: ";cin>>(*vetor_prod)[i].cod;
        cin.ignore();
        cout<<"\nNome: ";cin.getline((*vetor_prod)[i].nome, 30);
        cout<<"\nPreco: ";cin>>(*vetor_prod)[i].preco;
        cout<<"\nQuantidade: ";cin>>(*vetor_prod)[i].qtdd;
    }
};


void imprime_produtos(int* n, t_prod** vetor_prod) {
    cout << "\n\nImpressao dos produtos\n";
    cout << "Codigo  |  Nome              |  Preco  |  Quantidade\n";
    
    for (int i = 0; i < *n; i++) {
        cout << (*vetor_prod)[i].cod << "      ";
        cout << (*vetor_prod)[i].nome << "      ";
        cout << (*vetor_prod)[i].preco << "      ";
        cout << (*vetor_prod)[i].qtdd << endl;
    }
};


int busca_produto (int *n, t_prod** vetor_prod, int cod){
    int id_produto;

    for(int i=0 ; i<*n ; i++){
        if ((*vetor_prod)[i].cod == cod){
            id_produto = i;
            return id_produto;
        }
    }
    return -1;

};

void imprime_um_produto(int *n, t_prod** vetor_prod, int cod){
    cout << "Codigo  |  Nome              |  Preco  |  Quantidade\n";
    
    for (int i = 0; i < *n; i++) {
        if((*vetor_prod)[i].cod == cod){
            cout << (*vetor_prod)[i].cod << "      ";
            cout << (*vetor_prod)[i].nome << "      ";
            cout << (*vetor_prod)[i].preco << "      ";
            cout << (*vetor_prod)[i].qtdd << endl;
        }
    }
};
int main(){
    int N;
    int codigo_busca, posicao;
    t_prod *v_produtos;

    vetor_produtos(&N, &v_produtos);
    cout<<"\nDigite o codigo de um produto para encontrar sua posicao no vetor: ";
    cin>>codigo_busca;
    posicao = busca_produto(&N, &v_produtos, codigo_busca);
    cout<<"\nPosicao: "<<posicao;
    if(posicao == -1){
        cout<<"\nProduto nao encontrado!\n";
    }else{
        imprime_um_produto(&N, &v_produtos, posicao);
    }
    
    //imprime_produtos(&N, &v_produtos);
    

};