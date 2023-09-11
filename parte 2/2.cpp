#include <iostream>
using namespace std;

int main(){
    int i, n, s=0;
    cout<<"Digite n ";
    cin>>n;
    int vetor[n];

    for(i=1 ; i<=n ; i++){
        cout<<"\nValor ["<<i<<"] = ";
        cin>>vetor[i];

        if(vetor[i]%5 == 0){
            s = s + vetor[i];
        }
    }

    for(i=1 ; i<=n ; i++){
        cout<<"\n\t"<<vetor[i];
    }
    
    cout<<"Somatorio de numeros multiplos de 5: "<<s;
    return 0;
}