#include <iostream>
using namespace std;

void ler_vetor(float v[], int *n){
    int i =0;

    cout<<"Digite N do vetor: ";
    cin>>*n;

    for (i=0 ; i<*n ; i++){
        cout<<"\n["<<i+1<<"] = ";
        cin>>v[i];
    }
}

void monta_vetor(float a[], float b[], float c[], int n){
    int i = 0;

    for(i=0 ; i<n ; i++){
        if(a[i] >= b[i]){
            c[i] = a[i];
        }else{
            c[i] = b[i];
        }
    }
}

void imprime_vetor(float v[], int n){
    int i = 0;
    
    cout<<"[";
    for (i=0 ; i<n ; i++){
        cout<<" "<<v[i];
    }
    cout<<" ]";

}

int main(){
    float x[50], y[50], z[50];
    int n;
    ler_vetor(x, &n);
    ler_vetor(y, &n); 
    monta_vetor(x, y, z, n);

    cout<<&x<<endl;
    cout<<&y<<endl;
    cout<<&z<<endl;

    
    cout<<"\nVetor x: ";
    imprime_vetor(x,n);
    cout<<"\nVetor y: ";
    imprime_vetor(y,n);
    cout<<"\nVetor z: ";
    imprime_vetor(z,n);

    return 0;
}