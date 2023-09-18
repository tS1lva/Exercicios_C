#include <iostream>
using namespace std;

void ler_inteiro(int *a, int *b, int *c){
    cout<<"\nDigite TRES inteiros diferentes";
    do{
        cout<<"\nprimeiro inteiro: ";
        cin>>*a;
        cout<<"\nsegundo inteiro: ";
        cin>>*b;
        cout<<"\nterceiro inteiro: ";
        cin>>*c;
    }while(*a==*b || *b == *c || *a==*c);
}

int maior_tres (int a, int b, int c){
    int maior;
    if(a > b && a > c){
        maior = a;
    }else if(b > a && b > c){
        maior = b;
    }else {
        maior = c;
    }
    return maior;
}

void imprime_quatro (int a, int b, int c, int m){
    cout<<"\n\nA = "<<a;
    cout<<"\nB = "<<b;
    cout<<"\nC = "<<c;
    cout<<"\nMAIOR = "<<m;
}

int main(){
    int a, b, c, m;
    ler_inteiro(&a,&b,&c);
    m = maior_tres(a,b,c);
    imprime_quatro(a,b,c,m);
    return 0;
}