#include <iostream>
using namespace std;

int main(){
    int n,i,soma_crescente=1;

    cout<<"Digite n ";
    cin>>n;
    int vetor[n];

    for (i=0 ; i<n ; i++){
        cout<<"\n\tValor ["<<i+1<<"] = ";
        cin>>vetor[i];
    }

    for(i=0 ; i<n ; i++){
        if(i > 0){
            if(vetor[i]>vetor[i-1]){
                soma_crescente+=1;
            }
        }

    }

    if(soma_crescente==n){
        cout<<"\n*** Numeros em ordem crescente! ***";
    }
    else{
        cout<<"\n*** Numeros NAO ESTAO em ordem crescente! ***";
    }
    return 0;
}