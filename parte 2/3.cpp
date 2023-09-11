#include <iostream>
using namespace std;

int main(){
    int i, n, o = 0;
    cout<<"Digite o tamanho dos vetores: ";
    cin>>n;
    o = 2*n;
    int vetorA[n], vetorB[n], vetorC[o];

    //Vetor A
    cout<<"Vetor A:";
    for (i=0 ; i<n ; i++){
        cout<<"\n\tValor ["<<i+1<<"]";
        cin>>vetorA[i];
    }

    //Vetor B
    cout<<"\nVetor B:";
    for (i=0 ; i<n ; i++){
        cout<<"\n\tValor ["<<i+1<<"]";
        cin>>vetorB[i];
    }
    
    //VetorC
    int j = 0;
    for(i=0 ; i<n ; i++){     
        vetorC[j] = vetorA[i];
        j = j+2;
    }
    
    j=1;
    for(i=0 ; i<n ; i++){
        vetorC[j] = vetorB[i];
        j = j+2;
    }
                
    cout<<"\nVetor C Intercalado:\n";
    for(i=0 ; i<o ; i++){
        cout<<" "<<vetorC[i];
    }
    return 0;
}