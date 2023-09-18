#include <iostream>
using namespace std;

void ler_vetor(float v[], int *n){
    int i =0;
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


