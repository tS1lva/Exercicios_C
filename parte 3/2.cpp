#include <iostream>
#include <string.h>
using namespace std;

int main(){
    int n, i;

    cout<<"Quantidade de nomes: ";
    cin>>n;
    
    char nome[n][51];
    
    cin.ignore();
    for (i=0 ; i<n ; i++){
        cout<<"\nNome "<<i+1<<": ";
        cin.getline(nome[i], 51);
    }

    //Espelhando uma nova matriz de nomes
    char nome_compare[n][51];
    for(i=0 ; i<n ; i++){
        for(int j=0 ; j<51 ; j++){
            nome_compare[i][j] = nome[i][j];
        }
    }

    for(i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            if(i != j){
                if(strcmp(nome[i], nome_compare[j]) ==0 ){
                    cout<<"\n\tNome igual >>>>"<<nome[i];
                    nome_compare[i][1]=0;//para não comparar duas vezes
                }
            }
        }
    }

    return 0 ;
}