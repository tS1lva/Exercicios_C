#include <iostream>
using namespace std;

int main(){
    int i, a=15;
    float p1[a], p2[a], m[a];

    for (i=0 ; i<a ; i++){
        cout<<"\nAluno ["<<i+1<<"] nota Prova 1: ";
        cin>>p1[i];

        cout<<"\nAluno ["<<i+1<<"] nota Prova 2: ";
        cin>>p2[i];

        m[i] = ((p1[i] +(2*p2[i]))/3);

    }

    cout<<"\nP1";
    for(i=0 ; i<a ; i++){
        cout<<" | "<<p1[i];
    }

    cout<<"\nP2";
    for(i=0 ; i<a ; i++){
        cout<<" | "<<p2[i];
    }

    cout<<"\nMedia";
    for(i=0 ; i<a ; i++){
        cout<<" | "<<m[i];
    }

    return 0;
}