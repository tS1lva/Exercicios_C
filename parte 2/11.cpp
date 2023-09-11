#include <iostream>
using namespace std;

int main(){
    int n, m, i, j, s=0, k;
    cout<<"Quantidade de linhas: ";
    cin>>n;
    cout<<"\nQuantidade de colunas: ";
    cin>>m;
    int matrizA[n][m];

    for (i=0 ; i<n ; i++){
        for(j=0 ; j<m ; j++){
            cout<<"\nPosicao ["<<i+1<<"]["<<j+1<<"] = ";
            cin>>matrizA[i][j];
        }
    }

    do{
        cout<<"\nLinha que deseja somar";
        cin>>k;
    }while(k<0 || k>n);

    cout<<"\nMatriz inserida: ";
    for(i=0 ; i<n ; i++){
        cout<<"\n|";
        for (j=0 ; j<m ; j++){
            cout<<" "<<matrizA[i][j];
            if(i == (k-1)){
                s += matrizA[i][j];
            }
        }
    cout<<" |";
    }
    cout<<"\n\nSoma Elementos da "<<k<<" linha: "<<s;
    return 0;
}