#include <iostream>
using namespace std;

int main(){
    int n, i;

    cout<<"Valor de N: ";
    cin>>n;
    int vx[n], vy[n], vz[n];

    cout<<"\nVetor X";
    for(i=0 ; i<n ; i++){
        cout<<"\n\tValor ["<<i+1<<"] = ";
        cin>>vx[i];
    }

    cout<<"\nVetor Y";
    for(i=0 ; i<n ; i++){
        cout<<"\n\tValor ["<<i+1<<"] = ";
        cin>>vy[i];
    }

    for(i=1 ; i<n ; i++){
        if(i % 2 == 0){
            vz[i] = vx[i];
        }
        else{
            vz[i] = vy[i];
        }
    }

    cout<<"Vetor Z: \n\t";
    for (i=1 ; i<n ; i++){
        cout<<" "<<vz[i];
    }

    return 0;
}