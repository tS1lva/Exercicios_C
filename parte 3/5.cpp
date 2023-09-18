#include <iostream>
#include <string.h>
using namespace std;

struct endereco
{
    char rua[50];
    int num;
    char cidade[40];
    char uf[2];
};


struct cli {
    char cpf[15];
    char nome[51];
    endereco endereco_cliente;
    int n_filhos;
};

int main(){
    int n, i;
    char cidade_consulta[40];
    

    cout<<"Quantos clientes deseja cadastrar? ";
    cin>>n;
    cli cliente[n];

    
    for (i=0 ; i<n ; i++){
        
        cout<<"\nCPF: ";
        cin.ignore();
        cin.getline(cliente[i].cpf, 15);
        cout<<"\nNome: ";
        cin.getline(cliente[i].nome, 15);
        cout<<"\nEndereco";
        cout<<"\n\t- Rua: ";
        cin.getline(cliente[i].endereco_cliente.rua, 50);
        cout<<"\n\t- Numero: ";
        cin>>cliente[i].endereco_cliente.num;
        cout<<"\n\t- Cidade: ";
        cin.ignore();
        cin.getline(cliente[i].endereco_cliente.cidade, 40);
        cout<<"\n\t- Estado: ";
        cin.getline(cliente[i].endereco_cliente.uf, 2);
        cout<<"\nNumero de filhos: ";
        cin>>cliente[i].n_filhos;
        
    }

    cout<<"\nDeseja buscar clientes de qual cidade? ";
    cin.ignore();
    cin.getline(cidade_consulta, 40);

    for (i=0 ; i<n ; i++){
        
        if(strcmp(cliente[i].endereco_cliente.cidade, cidade_consulta) == 0){
            cout<<"\nCliente "<<i+1;
            cout<<"\n\tCPF: "<<cliente[i].cpf;
            cout<<"\n\tNome:"<<cliente[i].nome;
            cout<<"\n\tEndereco: ";
            cout<<"\n\t\tRua "<<cliente[i].endereco_cliente.rua;
            cout<<"\n\t\t N "<<cliente[i].endereco_cliente.num;
            cout<<"\n\t\t Cidade "<<cliente[i].endereco_cliente.cidade;
            cout<<"\n\t\t Estado "<<cliente[i].endereco_cliente.uf;
            cout<<"\n\tNumero de filhos"<<cliente[i].n_filhos;

        }
    }
    return 0;
}