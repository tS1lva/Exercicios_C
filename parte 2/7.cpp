#include <iostream>
using namespace std;

int main(){
    int i, n, s=0;

    cout<<"Tamanho do vetor ";
    cin>>n;

    int vetorX[n];

    for(i=0 ; i<n ; i++){
        cout<<"\n\tPosicao ["<<i<<"]";
        cin>>vetorX[i];
    }

    cout<<"\nVetor inserido: \n\t";
    for(i=0 ; i<n ; i++){
        if(i%2 != 0){
            s+=vetorX[i];
        }
        cout<<" | "<<vetorX[i];
    }
    cout<<"\nSomatoria das posicoe impares: "<<s;

    return 0;
}