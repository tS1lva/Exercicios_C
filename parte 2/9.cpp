#include <iostream>
using namespace std;

int main(){
    int n, i, j, simetrica ;
    cout<<"Digite o valor de N: ";
    cin>>n;

    int matriz[n][n];
    ///Preenche a matriz
    for (i=0 ; i<n ; i++){
        for(j=0 ; j<n ; j++){
            cout<<"\nPosicao ["<<i<<"]["<<j<<"]";
            cin>>matriz[i][j];
        }
    }

    ///Imprime a matriz
    for (i=0 ; i<n ; i++){
        cout<<"\n|";
        for (j=0 ; j<n ; j++){
            cout<<" "<<matriz[i][j];
        }
        cout<<" |";
    }

    ///Verifica simetria
    for (i=0 ; i<n ; i++){
        for (j=0 ; j<n ; j++){
            if(matriz[i][j] != matriz[j][i]){
                simetrica = 0;
                break;
            }
            else{
                simetrica = 1;
            }
        }
    }
    if(simetrica){
        cout<<"\nMatriz digitada SIMETRICA";
    } else{
        cout<<"\nMatriz digitada NAO SIMETRICA";
    }
    
    return 0;
}