#include <iostream>
using namespace std;

int main(){
    int n,k,m;

    do{
        cout<<"\nDigite um valor maior que zero: ";
        cin>>n;
    }while(n<1);

    m=n;
    int vetor2[m];
    int vetor[n];
    for(int i=1 ; i<=n ; i++){
        cout<<"\n\tDigite o ["<<i<<"] termo: ";
        cin>>vetor[i];
    }
    
    cout<<"\nDigite o valor de k para multiplicar pelo seu vetor: ";
    cin>>k;

    cout<<"\nVetor lido: ";
    for(int i=1 ; i<=n ; i++){
        cout<<vetor[i]<<" ";
    }

    cout<<"\nMultiplicado por "<<k<<":\n\n";


    for(int i=1 ; i<=m ; i++){
        vetor2[i] = vetor[i]*k;
        cout<<vetor2[i]<<" ";
    }


    return 0;
}