#include <iostream>
using namespace std;

int main(){
    int n, i, j;
    cout<<"Digite N ";
    cin>>n;
    int vetor[n], vetor_inv[n];
    for(i=0 ; i<n ; i++){
        cout<<"\n\tValor ["<<i+1<<"]";
        cin>>vetor[i];
    }

    for(i=0 ; i<n ; i++){
        j = (n-i)-1;
        vetor_inv[i] = vetor[j];
    }

    cout<<"\n\n----------Resultado------------------------------------------\n";
    cout<<"\tVetor lido        | ";
    for(i=0 ; i<n ; i++){
        cout<<vetor[i]<<" | ";
    }
    cout<<"\n\tVetor invertido  | ";
    for(i=0 ; i<n ; i++){
        cout<<vetor_inv[i]<<" | ";
    }
    
    return 0;
}