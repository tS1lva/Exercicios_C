#include <iostream>
#include <string.h>

using namespace std;

int main(){
    int n, i, contem = 0;

    cout<<"Digite quantas cidades: ";
    cin>>n;
    char cidades[n][31];
    char cidadeBusca[31];

    cin.ignore();
    for(i=0 ; i<n ; i++){       
        cout<<"\nCidade : ";
        cin.getline(cidades[i], 31);
    }
    
    //Ver cidades cadastradas
    for(i=0 ; i<n ; i++){
        cout<<" | "<<cidades[i];
    }

    cout<<"\n\tCidade de busca: "; 
    cin>>cidadeBusca;
    cin.ignore();
    while(strcmp(cidadeBusca, "*") != 0){
        for(i=0 ; i<n ; i++){
            if (strcmp(cidadeBusca, cidades[i]) == 0){
                contem = 1;
            }   
        }

        if(contem == 1){
            break;
        }else{

            cout<<"\n\tCidade de busca: "; 
            cin.getline(cidadeBusca, 31);
        }     
    }

    if(contem){
        cout<<"\n\nA cidade "<<cidadeBusca<<" consta na lista!";
    }else{
        cout<<"\n\nCidade não encontrada! ";
    }

    return 0;
}
